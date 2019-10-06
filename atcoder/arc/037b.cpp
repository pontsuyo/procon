#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int n, m;
vector<int> edge[5000]; 
bool fin[105]; // 探索した: true，してない: false．
int cnt = 0;
bool ans;

bool dfs(int s, int p){
    if(fin[s]) return false;
    fin[s] = true;
    for (int u : edge[s]) {
        if(u==p) continue;
        bool tmp = dfs(u, s);
        ans &= tmp;
    }
    return true;
}

int main(){
    cin >> n >> m;
    rep(i, m){
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        edge[u].emplace_back(v);
        edge[v].emplace_back(u);
    }
    rep(i, n){
        fin[i] = false;
    }
    rep(i, n){
        if(!fin[i]){
            ans = true;
            dfs(i, -1);
            if(ans) cnt++;
        }
    }

    cout << cnt << endl;
    // printf("%d\n", N);
    return 0;
}