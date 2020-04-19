#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

vector<int> edge[100005];
int memo[100005];

int dfs(int s){
    if(edge[s].size()==0){
        memo[s] = 0;
        return 0;
    }
    if(memo[s]!=-1) return memo[s];

    int MAX = 0;

    for (auto v : edge[s]){
        MAX = max(MAX, dfs(v)+1);
    }

    memo[s] = MAX;
    return MAX;
}

int main(){
    int n, m;
    cin >> n >> m;
    rep(i, n) memo[i+1] = -1;
    rep(i, m){
        int x, y;
        cin >> x >> y;
        edge[x].emplace_back(y);
    }
    int ans = 0;
    rep(i, n) ans = max(ans, dfs(i+1));
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}