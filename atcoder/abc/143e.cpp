#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define MAX_V 1000


struct edge{int to, cost;};
struct vertex{int len, now, time;};
vector <edge> G[MAX_V];
vertex d[MAX_V];

int V, E, L;

void dijkstra(int s){
    // queの中身は頂点．P<最短距離, 頂点番号>で格納されている．
    // greater<P> を指定することでfirstが小さい順に取り出せるようにする
    priority_queue<P, vector<P>, greater<P> > que;
    
    vertex _;
    _.len = INF;
    _.time = INF;
    _.now = 0;
    rep(i, V){
        d[i] = _;
    }
    d[s].len = 0;
    d[s].now = L;
    d[s].time = 0;

    que.push(P(0,s));

    while(!que.empty()){
        P p=que.top(); que.pop();
        int v=p.second;
        if(d[v].time < p.first) continue;
        for(int i=0; i<G[v].size(); ++i){
            edge e = G[v][i];
            if(e.cost >L) continue;

            int dif = 0;
            if(d[v].now < e.cost){
                dif = 1;
                d[v].now = L;
            }
            if(d[e.to].time >= d[v].time + dif){
                if(d[e.to].len > d[v].len + e.cost){
                    d[e.to].len = d[v].len + e.cost;
                    d[e.to].time = d[v].time + dif;
                    d[e.to].now = d[v].now - e.cost;
                    
                    que.push(P(d[e.to].time, e.to));
                }
            }
        }
    }
}


int main(){
    cin >> V >> E >> L;
    rep(i, E){
        int from_, to_, cost_;
        cin >> from_ >> to_ >> cost_;
        --from_;
        --to_;
        edge e;
        e.to = to_; e.cost = cost_;
        G[from_].emplace_back(e);
        e.to = from_;
        G[to_].emplace_back(e);
    }

    map<P, int> m;
    rep(i, V){
        dijkstra(i);

        // rep(j, V){
        //     printf("%d\n", d[j].time);
        // }
        rep(j, V){
            if(i<j){
                if(d[j].time==INF){
                    m[P(i, j)] = -1;
                }else{
                    m[P(i, j)] = d[j].time;
                }
            }
        }
    }

    // for (auto ii:m){
    //     cout << ii.first.first << " " << ii.first.second << " " << ii.second << endl;
    // }
    
    int q;
    cin >> q;
    rep(i, q){
        int s, t;
        cin >> s >> t;
        --s;
        --t;
        cout << m[P(s, t)] << endl;
    }
    return 0;
}