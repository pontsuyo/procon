#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007


#define MAX_V 100
#define INF 1001001001

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
    int a, b;
    cin >> a >> b;
    V = 55;
    rep(i, V){
        rep(j, V){
            cost[i][j] = INF;
        }
    }
    for(int i=0;i<=40;i++){
        cost[i][i+1] = 1;
        cost[i][i+5] = 1;
        cost[i][i+10] = 1;
        cost[i+1][i] = 1;
        cost[i+5][i] = 1;
        cost[i+10][i] = 1;
    }

    dijkstra(a);
    cout << d[b] << endl;
    return 0;
}