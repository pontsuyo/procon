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

    ll ans = 0;
    rep(i, n){
        int ii = i+1;
        if(ii%3 != 0 && ii%5 !=0){
            ans += ii;
        }
    }
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}