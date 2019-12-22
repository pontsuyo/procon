#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18
#define MAX_V 100005

struct edge{int to, cost;};
vector <edge> G[MAX_V];

int d[MAX_V], dt[MAX_V], da[MAX_V];
int V, E;

void dijkstra2(int s){
    // queの中身は頂点．P<最短距離, 頂点番号>で格納されている．
    // greater<P> を指定することでfirstが小さい順に取り出せるようにする
    priority_queue<P, vector<P>, greater<P> > que;
    fill(d, d+V, INF);
    d[s] = 0;
    que.push(P(0,s));

    while(!que.empty()){
        P p=que.top(); que.pop();
        int v=p.second;
        if(d[v] < p.first) continue; // これはなんのために
        for(int i=0; i<G[v].size(); ++i){
            edge e = G[v][i];
            if(d[e.to] > d[v] + e.cost){
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to],e.to));
            }
        }
    }
}


int main(){
    cin >> V;
    int u, v;
    cin >> u >> v;
    u--;
    v--;

    rep(i, V-1){
        int from_, to_;
        cin >> from_ >> to_;
        --from_;
        --to_;
        edge e;
        e.to = to_; e.cost = 1;
        G[from_].emplace_back(e);
        e.to = from_;
        G[to_].emplace_back(e); // 戻る方向のも追加が必要！！
    }

    dijkstra2(u);
    rep(i, V){
        dt[i] = d[i];
    }

    dijkstra2(v);
    rep(i, V){
        da[i] = d[i];
    } 

    int ans = 0;
    rep(i, V){
        if(dt[i]<da[i]){
            int t=dt[i];
            int a = da[i];
            ans = max(ans, a-1);
        }
    }
    cout << ans << endl;

    return 0;
}