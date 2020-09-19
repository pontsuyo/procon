#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (1e9+7)
#define INF (int) 1e9
#define LLINF (ll) 1e18

int tmp[1005];
int ans[10005];

int main(){
    int n; cin >> n;
    rep(i, 1005){
        tmp[i] = i*i;
    }

    for (int s = 3; s <= 105; s++){
        for (int x = 1; x <= s-2; x++){
            for (int y = 1; y <= s-x-1; y++){
                // if(s-x<2 || s-y<2) continue;

                // printf("%d %d %d\n", s, x, y);
                
                int n2 = tmp[s-x] + tmp[s-y] + tmp[x+y];
                if(n2%2==0){
                    if(n2/2 > 10003) continue;
                    ans[n2/2]++;
                }
            }
        }
    }

    repr(i, 1, n){
        cout << ans[i] << endl;
    }
    
    // printf("%d\n", N);
    return 0;
}