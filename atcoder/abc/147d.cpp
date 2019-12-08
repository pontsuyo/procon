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
    ll a[n];
    rep(i, n){
        cin >> a[i];
    }

    ll ans = 0;
    rep(j, 61){
        ll zero = 0, ichi = 0;
        rep(i, n){
            if(a[i]%2==0){
                zero++;
            }else{
                ichi++;
            }
            a[i]/=2;
        }
        ans +=  (zero * ichi)%MOD * ((ll)pow(2, j)%MOD);
        ans %= MOD;
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}