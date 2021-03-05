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
    int n, t;
    cin >> n >> t;

    int n1 = n/2;
    int n2 = n-n1;

    int a[n];
    rep(i, n) cin >> a[i];

    vector<ll> v1, v2;

    rep(ii, 1<<n1){
		ll tmp = 0;
		rep(i, n1){
			if(ii>>i & 1){
				tmp += a[i];
			}
		}
		v1.emplace_back(tmp);
    }

    rep(ii, 1<<n2){
		ll tmp = 0;
		rep(i, n2){
			if(ii>>i & 1){
				tmp += a[n1+i];
			}
		}
		v2.emplace_back(tmp);
    }

	sort(all(v1));
	sort(all(v2));

	ll ans = 0;
	for (auto &&i : v2)
	{
		ll vt = t-i;
		if(vt<0) continue;
		auto id = upper_bound(v1.begin(), v1.end(), vt) - v1.begin();
		chmax(ans, i+v1[id-1]);
	}
	
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}