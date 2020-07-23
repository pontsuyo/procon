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

int main(){
    ll p = 1;
    int n;
    cin >> n;
    ll a[n];
    rep(i, n){
        cin >> a[i];
        if(a[i]==0){
            cout << 0 << endl;
            return 0;
        }
    }

    rep(i, n){
        if(a[i]!=0 && p > (long double)1e18 / a[i]){
            cout << -1 << endl;
            return 0;
        }
        p *= a[i];
    }
    cout << p << endl;
    // printf("%d\n", N);
    return 0;
}