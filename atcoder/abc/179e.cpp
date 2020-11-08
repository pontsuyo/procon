#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (ll i = l; i <= (ll)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (1e9+7)
#define INF (int) 1e9
#define LLINF (ll) 1e18

vector<int> v[100005];
vector<int> a(100005);

int main(){
    ll n; cin >> n;
    ll x, m; cin >> x >> m;

    ll ans = 0;
    ll st=LLINF, en=LLINF;
    x %= m;
    repr(i, 1, n){
        if(v[x].size()>0){
            st = v[x][0];
            en = i;
            break;
        }

        ans += x;
        v[x].emplace_back(i);
        a[i]=x;
        
        x = (x * x) % m;
    }

    if(st!=LLINF){
        ll nloop = (n-(st-1)) / (en-st) -1;
        ll nokori = (n-(st-1)) % (en-st);

        ll tmpsum = 0;
        for (ll i = st; i < en; i++){
            tmpsum += a[i];
        }
        // printf("%lld\n", ans);
        ans += tmpsum * nloop;
        // printf("%lld\n", ans);
        for (ll i = st; i < st+nokori; i++){
            ans += a[i];
        }
    }
    
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}