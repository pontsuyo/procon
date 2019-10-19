#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9


vector<int> edges[10];

bool seen[10];
int ans = 0;
int n;

int dfs(int s, int p, int d){
	seen[s] = true;
	for (int v: edges[s]){
		if(!seen[v] && v!=p){
			int td = dfs(v, s, d+1);
			if(td==n-1) ans++;
		}
	}
	seen[s] = false;
	return d;
}

int main(){
    int m;
    cin >> n >> m;
    rep(i, m){
		int a, b;
		cin >> a >> b;
		--a;
		--b;
		edges[a].emplace_back(b);
		edges[b].emplace_back(a);
    }

	rep(i, 10){
		seen[i] = false;
	}

    dfs(0, -1, 0);

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}