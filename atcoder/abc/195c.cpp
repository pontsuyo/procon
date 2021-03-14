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

	vector<ll> t;
	ll tt = (ll)1000;
	ll ttt = (ll)1;

	rep(i, 6){
		t.emplace_back(ttt);
		ttt *= tt;
	}


	ll ans = 0;
	int tmp=0;
	repr(i, 1, 5){
		if(n >= t[i]){			
			ans += (i-1)*(t[i]-t[i-1]);
			// cout << ans << endl;
		}else{
			tmp = i;
			break;
		}
	}
	if(n==(ll)1000000000000000){
		ans += 5;
		cout << ans << endl;
		return 0;
	}
	ans += (tmp-1) * (n-t[tmp-1]+1);

	cout << ans << endl;
	// printf("%d\n", N);
	return 0;
}