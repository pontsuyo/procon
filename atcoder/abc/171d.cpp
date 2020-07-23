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
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];
    int q;
    cin >> q;
    int b[q], c[q];
    rep(i, q) cin >> b[i] >> c[i];

    ll s = 0;

    map<int, int> m;
    rep(i ,n){
        m[a[i]]++;
    }
    for (auto &&i : m){
        s += (ll)i.first * i.second;
    }
    
    rep(i, q){
        int tmp = m[b[i]];
        m[c[i]] += m[b[i]];
        m[b[i]] = 0;
        s += (ll) (c[i]-b[i]) * tmp;
        cout << s << endl;
    }

    
    // printf("%d\n", N);
    return 0;
}