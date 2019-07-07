#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define MAX_V 1000
#define INF 1000000000

int cost[MAX_V][MAX_V];
int d[MAX_V];
bool used[MAX_V];
int V, E;

void dijkstra(int s){
    fill(d, d+V, INF);
    fill(used, used+V, false);
    d[s] = 0;

    while(true){
        int v=-1;
        // まだ使われていない頂点のうち距離が最小のものを探す
        for (int u=0;u<V;u++){
            if(!used[u] && (v==-1 || d[u] < d[v])) v=u;
        }
        // 上のループでvが一度も更新されなかったらbreak
        if(v==-1) break;
        used[v] = true;

        for(int u = 0;u < V; u++){
            d[u] = min(d[u], d[v]+cost[v][u]);
        }
    }
}


int main(){
    cin >> V >> E;
    rep(i, V){
        rep(j, V){
            cost[i][j] = INF;
        }
    }

    rep(i, E){
        int from_, to_, cost_;
        cin >> from_ >> to_ >> cost_;
        --from_;
        --to_;
        cost[from_][to_] = cost_;
        cost[to_][from_] = cost_;
    }
    dijkstra(0);
    rep(i, V){
        cout << d[i] << endl;
    }
    return 0;
}