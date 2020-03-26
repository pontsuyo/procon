#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

int main(){
    int d, g;
    cin >> d >> g;
    int p[d], c[d];
    rep(i, d){
        cin >> p[i] >> c[i];
    }

    int ans = INF;
    rep(kk, 1<<d){
        int sum = 0;
        int cnt = 0;
        set<int> s;
        rep(j, d){
            if(kk>>j & 1){
                sum += c[j];
                sum += 100 * (j+1) *p[j];
                cnt += p[j];
                s.insert(j);
            }
        }

        // printf("  %d %d\n",sum, cnt);
        // for (auto i : s)
        // {
        //     printf(     "%d \n",i);
        // }

        for (int i = d-1; i >=0 ; i--){
            if(g <= sum) break;
            if(s.find(i) == s.end()){
                int u = 100*(i+1);
                if(g-sum <= u * p[i]){
                    int num = (g-sum+u-1)/u;
                    cnt += num;
                    sum += num*u;
                    break;
                }else{
                    cnt += (p[i]-1);
                    sum += 100 *(i+1) * (p[i]-1);
                }
            }
        }
        // printf("%d %d\n",sum, cnt);
        if(g <= sum) chmin(ans, cnt);
    }


    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}