#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i <= (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

int main(){
    int k;
    cin >> k;


    ll ans = 0;
    rep1(i, k){
        rep1(j, k){
            int tmp = __gcd(i, j);
            rep1(kk, k){
                ans += __gcd(tmp, kk);
            }
        }
    }    

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}