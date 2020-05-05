#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (1e9+7)
#define INF (int) 1e9
#define LLINF (ll) 1e18

ll mpow(ll a, ll n) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * a;
        a = a * a;
        n >>= 1;
    }
    return res;
}

int main(){
    ll x;
    cin >> x;
    
    ll a=0;
    while(true){
        a++;
        repr(b, -(a-1), a-1){
            if(mpow(a, 5)-mpow(b, 5)==x){
                cout << a << " " << b << endl;
                return 0;
            }
        }
    }
    // printf("%d\n", N);
    return 0;
}