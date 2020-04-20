#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

int main(){
    int t;
    cin >> t;
    rep(ti, t){
        int x, y;
        cin >> x >> y;
        // int lx = x & -x;
        // int ly = y &-y;
        // if(lx==ly){
        //     printf("Case #%d: %s\n", ti+1 "IMPOSSIBLE");
        //     continue;
        // }
        // int xx = abs(x);
        // int yy = abs(y);
        // if(xx==3){
        //     if(y)
        // }
        if(x==3){
            if(y==2){
                printf("Case #%d: WNE\n", ti+1);
            }
            if(y==-2){
                printf("Case #%d: WSE\n", ti+1);
            }
        }
        if(x==2){
            if(y==3){
                printf("Case #%d: SEN\n", ti+1);
            }
            if(y==-3){
                printf("Case #%d: NES\n", ti+1);
            }
        }
        if(x==-3){
            if(y==2){
                printf("Case #%d: ENW\n", ti+1);
            }
            if(y==-2){
                printf("Case #%d: ESW\n", ti+1);
            }
        }

        if(x==-2){
            if(y==3){
                printf("Case #%d: SWN\n", ti+1);
            }
            if(y==-3){
                printf("Case #%d: NWS\n", ti+1);
            }
        }


            
        printf("Case #%d: %s\n", ti+1 ans.c_str());
        "IMPOSSIBLE";
    }
    return 0;
}