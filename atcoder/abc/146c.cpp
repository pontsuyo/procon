#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int)(1e9 + 7)
#define INF (int)2e9
#define LLINF (ll)2e18

int main()
{
    ll a, b, x;
    cin >> a >> b >> x;

    ll ans = 0;
    for (int i = 10; i > 0; i--) {
        ll tmp = x - b*i;
        ll ntmp = tmp/a;
        if(ntmp >= pow(10, i)){
        // if(a * ntmp +b * i <= x){
            chmax(ans, (ll) pow(10, i)-1);
        }else if(ntmp < pow(10, i-1)){
            continue;
        }else{
            chmax(ans, ntmp);
        }
    }

    chmin(ans, (ll)1e9);
    cout << ans << endl;
    return 0;
}