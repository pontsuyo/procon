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
    ll n;
    cin >> n;

    ll ans = n-1;
    for (ll i = 2; i*i <= n ; i++){
        if(n%i==0){
            ll tmp = n/i;
            ans = min(ans, tmp + i -2);
        }
    }
    
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}