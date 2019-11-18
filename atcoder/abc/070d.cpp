#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

#define MAX_V 100000

struct edge{int to, cost;};
vector <edge> G[MAX_V];

ll d[MAX_V];
int V;

void dijkstra2(ll s){
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
            if(d[e.to] > d[v] + e.cost){
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to],e.to));
            }
        }
    }
}


int main(){
    cin >> V;

    rep(i, V-1){
        ll from_, to_, cost_;
        cin >> from_ >> to_ >> cost_;
        --from_;
        --to_;
        edge e;
        e.to = to_; e.cost = cost_;
        G[from_].emplace_back(e);
        e.to = from_;
        G[to_].emplace_back(e); // 戻る方向のも追加が必要！！
    }
    int q, k;
    cin >> q >> k;

    dijkstra2(--k);
    rep(i, q){
        int x, y;
        cin >> x >> y;
        cout << d[--x] + d[--y] << endl;
    }
    return 0;
}