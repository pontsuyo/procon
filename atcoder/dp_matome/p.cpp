#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

vector<int> edges[100005];

ll dp[100005][2];

void dfs(int v, int p){
    if(edges[v].size()==1 && edges[v][0]==p){
        dp[v][0] = 1;
        dp[v][1] = 1;
    }else{
        for (auto vi : edges[v]){
            if(vi!=p){
                dfs(vi, v);
            }
        }

        ll v0 = 1, v1=1;
        for (auto vi : edges[v]) {
            if(vi!=p){
                v0 *= (dp[vi][0] + dp[vi][1])%MOD;
                v0 %= MOD;

                v1 *= dp[vi][0];
                v1 %= MOD;
            }
        }
        dp[v][0] = v0;        
        dp[v][1] = v1;
        // printf("%d %d %d\n", v, v0, v1);
    }
}

int main(){
    int n;
    cin >> n;
    rep(i, n-1){
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        edges[x].emplace_back(y);
        edges[y].emplace_back(x);
    }

    dfs(0, -1);

    cout << (dp[0][0] + dp[0][1])%MOD << endl;
    // printf("%d\n", N);
    return 0;
}