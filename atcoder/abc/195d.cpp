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
	int n, m, q;
	cin >> n >> m >> q;

	vector<P> ps(n);
	rep(i, n){
		cin >> ps[i].second >> ps[i].first;
		ps[i].first = -ps[i].first;
	}

	sort(all(ps));

	rep(i, n){
		ps[i].first = -ps[i].first;
	}

	// for (auto &&i : ps)
	// {
	// 	printf("%d %d\n", i.first, i.second);
	// }


	vector<int> x(m);
	rep(i, m) cin >> x[i];

	rep(qi, q){
		vector<int> ms;

		int l, r;
		cin >> l >> r;
		l--;r--;
		rep(i, m){
			if(i<l || r<i) ms.emplace_back(x[i]);
		}

		sort(all(ms));

		int ans = 0;
		int mcnt = m-(r-l+1);
		for (int i = 0; i < n ; i++)
		{
			auto id = lower_bound(all(ms), ps[i].second);
			if(id!=ms.end()){
				ans += ps[i].first;
				ms.erase(id);
			}
		}
		
		cout << ans << endl;	
	}
	// printf("%d\n", N);
	return 0;
}