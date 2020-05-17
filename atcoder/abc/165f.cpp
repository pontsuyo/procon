#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) (v).begin(), (v).end()
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

int n;
int a[200005];
vector<int> edges[200005];

vector<int> A;
vector<int> dp(200005, INF);
vector<int> ans(200005, INF);

void dfs(int v, int p){
    int idx = lower_bound(all(dp), a[v]) - dp.begin();
    int tmp = dp[idx];
    dp[idx] = a[v];
    ans[v] = lower_bound(all(dp), INF) - dp.begin();

    for (auto vi : edges[v]){
        if(vi != p) dfs(vi, v);
    }
    dp[idx] = tmp;    
}


int main(){    
    cin >> n;
    rep(i, n) cin >> a[i];
    rep(i, n-1){
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        edges[u].emplace_back(v);
        edges[v].emplace_back(u);
    }

    dfs(0, -1);

    rep(i, n) cout << ans[i] << endl;
    // printf("%d\n", N);
    return 0;
}