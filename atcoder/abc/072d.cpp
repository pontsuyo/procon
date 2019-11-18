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
    int n;
    cin >> n;
    
    int tmp = 0;
    int ans = 0;
    rep(i, n){
        int p;
        cin >> p;
        if(p==i+1){
            if(tmp==i-1){
                tmp = 0;
                continue;
            }
            ans++;
            tmp = i;
        }
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}