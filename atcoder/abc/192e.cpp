#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (1e9+7)
#define INF (int) 1e9
#define LLINF (ll) 1e18

struct edge{ll to, cost, period;};
vector <edge> G[100005];

ll d[100005];
int V, E;

void dijkstra(int s){
    // queの中身は頂点．P<最短距離, 頂点番号>で格納されている．
    // greater<P> を指定することでfirstが小さい順に取り出せるようにする
    priority_queue<P, vector<P>, greater<P> > que;
    fill(d, d+V, LLINF);
    d[s] = 0;
    que.push(P(0,s));

    while(!que.empty()){
        P p=que.top(); que.pop();
        ll v=p.second;
        if(d[v] < p.first) continue; // これはなんのために
        for(int i=0; i<G[v].size(); ++i){
            edge e = G[v][i];
            ll dt = (ll) ceil((double)d[v]/e.period)*e.period + e.cost;
            if(d[e.to] > dt){
                d[e.to] = dt;
                que.push(P(d[e.to],e.to));
            }
        }
    }
}


int main(){
    cin >> V >> E;
    int x, y;
    cin >> x >> y;
    x--;
    y--;

    rep(i, E){
        int a, b, t, k;
        cin >> a >> b >> t >> k;
        a--;
        b--;
        edge e;
        e.to = b; e.cost = t; e.period=k;
        G[a].emplace_back(e);
        e.to = a;
        G[b].emplace_back(e);
    }

    dijkstra(x);

    if(d[y]!=LLINF){
        cout << d[y] << endl;
    }else{
        cout << -1 << endl;
    }
    // printf("%d\n", N);
    return 0;
}