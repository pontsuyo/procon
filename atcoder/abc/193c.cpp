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

    vector<ll> v, vv;
    for (ll i = 2; i <= 100000; i++){
        ll ti = i;
        while(ti <= (ll)100000*100000){
            ti *= i;
            v.emplace_back(ti);
        }
    }

    sort(v.begin(), v.end());
    printf("%d\n", v.size());
    auto result = unique(v.begin(), v.end());
    v.erase(result, v.end());
    printf("%d\n", v.size());


    auto c = upper_bound(v.begin(), v.end(), n) - v.begin();

    cout << n-c << endl;
    // printf("%d\n", N);
    return 0;
}