#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
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
	int n, m;
	cin >> n >> m;

	vector<int> a(n);
	rep(i, n){
		cin >> a[i];
	}

	map<int, int> ma;
	rep(i, m){
		ma[a[i]]++;
	}

	set<int> unused;
	rep(i, n+1) unused.insert(i);

	for (auto &&i : ma)
	{
		unused.erase(i.first);
	}
	

	int ans = *unused.begin();

	for (int i = 0; i < n-m; i++)
	{	
		// if(a[i]==a[i+m]) continue;
		if(ma[a[i]]==1){
			unused.insert(a[i]);
		}
		ma[a[i]]--;

		if(ma[a[i+m]]==0){
			unused.erase(a[i+m]);
		}
		ma[a[i+m]]++;

		chmin(ans, *unused.begin());
	}
	cout << ans << endl;
	return 0;
}