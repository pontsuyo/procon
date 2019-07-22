#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

#define MAX_V 200005
#define INF 1001001001

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
        if(d[v] < p.first) continue;
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
    int s;
    cin >> V >> E >> s;
    --s;
    rep(j, V){
        rep(i, E){
            int from_, to_;
            cin >> from_ >> to_;
            --from_;
            --to_;
            if(from_<j || to_<j) continue;
            edge e;
            e.to = to_; e.cost = 1;
            G[from_].emplace_back(e);
            e.to = from_;
            G[to_].emplace_back(e); // 戻る方向のも追加が必要！！
        }
        dijkstra2(s);
        if(d[j]!=INF) cout << j+1 << endl;
    }
    return 0;
}