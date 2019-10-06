#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

class edge{
    public:
    int to, weight;
};

vector<edge> edges[100005];

bool ans[100005];

void dfs(int v, int prev) {
    for (auto u : edges[v]) {
        if(u.to == prev) continue;
        if(u.weight%2==0){
            ans[u.to] = ans[v];
        }else{
            ans[u.to] = !ans[v];
        }
        dfs(u.to, v);
    }
}


int main(){
    int n;
    cin >> n;
    rep(i, n-1){
        int u, v, w;
        cin >> u >> v >> w;
        edge e;
        v--;
        u--;
        e.to = v;
        e.weight = w;
        edges[u].emplace_back(e);
        e.to = u;
        edges[v].emplace_back(e);
    }

    rep(i, n){
        ans[i] = false;
    }

    dfs(0, -1);

    rep(i, n){
        if(ans[i]) {
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }
    }
    // printf("%d\n", N);
    return 0;
}