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
    ll n;
    cin >> n;
    n--;

    int d = 1;
    rep(i, 15){
        if(n >= mpow(26, i+1)){
            n -= mpow(26, i+1);
            d++;
        }else{
            break;
        }
    }

    int ans[d];
    rep(i, d){
        ans[i] = n%26;
        n /= 26;
    }

    rep(i, d){
        cout << (char)('a'+ans[d-1-i]);
    }
    cout << endl;
    // printf("%d\n", N);
    return 0;
}