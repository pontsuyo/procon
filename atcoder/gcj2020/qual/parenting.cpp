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
    int t;
    cin >> t;

    rep(ti, t){
        int n; cin >> n;
        tuple<int, int, int> task[n];
        rep(i, n){
            int s, e;
            cin >> s >> e;
            get<0>(task[i]) = s;
            get<1>(task[i]) = e;
            get<2>(task[i]) = i;
        }
        sort(task, task+n);

        int end[2];
        end[0]=0, end[1]=0;
        
        string ans = "";
        string ansc[n];
        bool ok;
        rep(i, n){
            ok = false;
            rep(p, 2){
                if(end[p] <= get<0>(task[i])){
                    end[p] = get<1>(task[i]);
                    ok=true;

                    if(p==0){
                        ansc[get<2>(task[i])] = "C";
                    }else{
                        ansc[get<2>(task[i])] = "J";
                    }

                    break;
                }
            }
            if(!ok){
                printf("Case #%d: IMPOSSIBLE\n", ti+1);
                break;
            }
        }
        if(ok){
            rep(i, n) ans += ansc[i];
            printf("Case #%d: %s\n", ti+1, ans.c_str());
        }
    }
    return 0;
}