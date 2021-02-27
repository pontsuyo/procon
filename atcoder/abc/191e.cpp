#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (1e9+7)
#define INF (int) 1e9
#define LLINF (ll) 1e18

struct edge{int to, cost;};
vector <edge> G1[2005], G2[2005];

int d1[2005], d2[2005];
int V, E;

void dijkstra(int s, int d[], vector<edge> G[]){
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
    int n, m;
    cin >> n >> m;
    V = n;
    E = m;
    int a[m], b[m], c[m];
    rep(i, m) cin >> a[i] >> b[i] >> c[i];

    rep(i, m) a[i]--, b[i]--;

    rep(i, m){
        edge e;
        e.to = b[i];
        e.cost = c[i];
        G1[a[i]].emplace_back(e);
    }

    rep(i, m){
        edge e;
        e.to = a[i];
        e.cost = c[i];
        G2[b[i]].emplace_back(e);
    }

    rep(i, n){
        dijkstra(i, d1, G1);
        dijkstra(i, d2, G2);

        int ansi = INF;
        int tmp = INF;
        rep(j, n){
            if(i==j) continue;
            tmp = d1[j] + d2[j];
            chmin(ansi, tmp);
        }
        
        // self loop
        for (auto &&e : G1[i])
        {
            if(e.to==i) chmin(ansi, e.cost);
        }
        

        if(ansi!=INF) cout << ansi << endl;
        else cout << -1 << endl;

    }

    return 0;
}