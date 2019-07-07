#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define MAX_V 1000
#define INF 1000000000
typedef pair<int, int> P;

struct edge{int to, cost;};
vector <edge> G[MAX_V];

int d[MAX_V];
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
    cin >> V >> E;
    // rep(i, V){
    //     rep(j, V){
    //         cost[i][j] = INF;
    //     }
    // }

    rep(i, E){
        int from_, to_, cost_;
        cin >> from_ >> to_ >> cost_;
        --from_;
        --to_;
        edge e;
        e.to = to_; e.cost = cost_;
        G[from_].emplace_back(e);
        e.to = from_;
        G[to_].emplace_back(e); // 戻る方向のも追加が必要！！
    }
    dijkstra2(0);
    rep(i, V){
        cout << d[i] << endl;
    }
    return 0;
}