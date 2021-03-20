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

	ll x[n];
	rep(i, n) cin >> x[i];

	vector<int> ps{2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

	ll ans = LLINF;
	rep(ni, 1<<ps.size()){
		vector<int> use(15);
		int ii = ni;
		rep(iii, 15){
			use[iii] = ii&1;
			ii >>= 1;
		}
		
		ll tmp = 1;
		rep(i, 15){
			if(use[i]==1) tmp *= ps[i];
		}

		bool ok = true;
		rep(i, n){
			if(__gcd(tmp, x[i])==1) ok = false;
		}
		if(ok) chmin(ans, tmp);
	}

	cout << ans << endl;
	// printf("%d\n", N);
	return 0;
}