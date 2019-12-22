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
    if(n%2==1){
        cout << 0 << endl;
        return 0;
    }
    n /=2;
    ll ans = 0;
    while(n>0){
        ans += n/5;
        n /=5;
    }
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}