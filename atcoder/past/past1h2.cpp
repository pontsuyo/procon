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

ll n1[200005];

int main(){
    int n;
    cin >> n;

    ll c[n];
    rep(i, n) cin >> c[i];
    
    ll kim = LLINF, m = LLINF;
    rep(i, n){
        if(i%2==0) chmin(kim, c[i]);
        chmin(m, c[i]);
    }

    int q;
    cin >> q;

    ll n2=0, n3=0;
    rep(i, q){
        int t; cin >> t;
        if(t==1){
            ll x, a;
            cin >> x >> a;
            x--;
            ll tmp = c[x] - n1[x] - n3;
            if(x%2==0) tmp -= n2;
            if(tmp < a) continue;
            n1[x] += a;

            if(x%2==0) chmin(kim, tmp-a);
            chmin(m, tmp-a);

        }else if(t==2){
            ll a; cin >> a;
            if(kim < a) continue;
            kim -= a;
            chmin(m, kim);
            n2 += a;

        }else{
            ll a; cin >> a;
            if(m < a) continue;
            m -= a;
            kim -= a;
            n3 += a;
        }
        
    }
    
    ll ans = n3*n + (n+1)/2*n2;
    rep(i, n) ans += n1[i];

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}