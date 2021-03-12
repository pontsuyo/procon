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

	vector<int> l(n), r(n);
	rep(i, n){
		int tl, tr;
		cin >> tl >> tr;
		l[i] = tl*2;
		r[i] = tr*2;
		// cin >> l[i] >> r[i];
	}

	sort(all(l));
	sort(all(r));

	ll lm, rm;
	if(n%2==0){
		lm = ((ll) l[n/2-1] + l[n/2])/2;
		rm = ((ll) r[n/2-1] + r[n/2])/2;
		cout << rm-lm+1 << endl;

		return 0;
	}else{
		lm = l[n/2];
		rm = r[n/2];
		cout << (rm-lm)/2+1 << endl;

		return 0;
	}
}