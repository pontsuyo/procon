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
    ll t1, t2;
    ll a1, a2, b1, b2;
    cin >> t1 >> t2 >> a1 >> a2 >> b1 >> b2;

    ll d1 = (a1-b1)*t1;
    ll d2 = (a2-b2)*t2;

    ll st = d1+d2;
    // printf("%lld\n", st);

    if(st==0){
        cout << "infinity" << endl;
        return 0;
    }

    if(st>0){
        ll l = 0;
        ll r = (ll) 1e18+5;
        ll tmp;
        while(r-l>1){
            tmp = (l+r)/2;
            if(tmp*st+d1>=0){
                r = tmp;
            }else{
                l = tmp;
            }
        }
        tmp = r;
        // printf("%lld\n", tmp);

        ll ans = tmp*2-1;
        if(tmp*st+d1==0){
            ans += 1;
        }
        cout << ans << endl;

    }else{
        ll l = 0;
        ll r = (ll) 1e18+5;
        ll tmp;
        while(r-l>1){
            tmp = (l+r)/2;
            if(tmp*st+d1<=0){
                r = tmp;
            }else{
                l = tmp;
            }
        }
        tmp = r;
        ll ans = tmp*2-1;
        if(tmp*st+d1==0){
            ans += 1;
        }
        cout << ans << endl;
    }

    return 0;
}