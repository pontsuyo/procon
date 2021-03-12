#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int)(1e9 + 7)
#define INF (int)1e9
#define LLINF (ll)1e18

vector<set<int>> used(100005);
vector<P> vp;

int main()
{
	int n;
	cin >> n;

	vector<vector<int>> g(n);

	rep(i, n - 1)
	{
		int a, b;
		cin >> a >> b;
		a--; b--;

		g[a].emplace_back(b);
		g[b].emplace_back(a);
		vp.emplace_back(a, b);
	}

	queue<int> q;
	vector<int> used(n, 0);
	vector<int> cs(n, 0);
	map<P, int> ansmap;
	used[0] = 1;

	int k=0;

	q.emplace(0);
	while(!q.empty()){
		int v = q.front();
		q.pop();
		if(k<g[v].size()) k = g[v].size();
		int c = 1;
		for (auto vi : g[v]){
			if(used[vi]) continue;
			if(c==cs[v]) c++;

			cs[vi] = c;
			ansmap[P(vi, v)] = c;
			ansmap[P(v, vi)] = c;
			c++;

			used[vi] = 1;
			q.emplace(vi);
		}	
	}

	cout << k << endl;
	for (auto &&vi : vp)
	{
		cout << ansmap[vi] << endl;
	}
	

	// printf("%d\n", N);
	return 0;
}