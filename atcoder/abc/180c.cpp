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
    ll n;
    cin >> n;

    vector<ll> v;
    for (ll i = 1; i * i <= n; i++)
    {
        if(n%i==0){
            v.emplace_back(i);
            if(n!=i*i) v.emplace_back(n/i);
        }
    }
    
    sort(v.begin(), v.end());

    rep(i,v.size()) cout << v[i] << endl;

    return 0;
}