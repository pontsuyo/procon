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
    int h, w, K;
    cin >> h >> w >> K;
    string s[h];
    rep(i, h) cin >> s[i];

    int ans = INF;
    rep(i, 1<<(h-1)){
        int idx[h];
        int ii = i;
        idx[0] = 0;
        rep(j, h-1){
            idx[j+1]=idx[j]+ii%2;
            ii >>= 1;
        }
        // printf("%d %d\n", idx[0], idx[1]);

        int tmp = idx[h-1];
        int cnt[h][2];
        rep(j, h) rep(l, 2)cnt[j][l]=0;

        int k=0;
        bool out=false;
        bool outout = false;
        while(k<w){
            rep(j, h){
                if(s[j][k]=='0'){
                    cnt[idx[j]][0]++;
                }else{
                    cnt[idx[j]][1]++;
                }

                if(cnt[idx[j]][0]>K || cnt[idx[j]][1]>K){
                    if(out){
                        outout = true;
                        break;
                    }
                    tmp++;
                    k--;
                    rep(l, h) rep(m, 2) cnt[l][m]=0;
                    out=true;
                    break;
                }else{
                    out=false;
                }
            }
            // printf("%d %d\n", i, k);
            k++;
            if(outout) break;
        }
        printf("%d %d\n", i, tmp);
        if(outout) continue;
        // printf("%d %d\n", i, tmp);
        chmin(ans, tmp);
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}