#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e17
#define MAX_n 100005
typedef pair<ll, int> P;

struct edge{int to, cost, rush;};
vector <edge> G[MAX_n*2];

ll dis[MAX_n];
int n, m, t, k;

void dijkstra2(int s){
    priority_queue<P, vector<P>, greater<P> > que;
    fill(dis, dis+n, LLINF);
    dis[s] = 0;
    que.push(P(0,s));

    while(!que.empty()){
        P p=que.top(); que.pop();
        int v=p.second;
        if(dis[v] < p.first) continue;
        for(int i=0; i<G[v].size(); ++i){
            edge e = G[v][i];
            // if(!(dis[e.to] <= t-e.rush+k-e.cost || t+e.rush-k<=dis[e.to])){
            //     dis[e.to] = t+e.rush-k;
            // }

            if(dis[e.to] > dis[v] + e.cost){
                dis[e.to] = dis[v] + e.cost;
                // if(!(dis[e.to] <= t-e.rush+k-e.cost || t+e.rush-k<=dis[e.to])){
                //    dis[e.to] = t+e.rush-k;
                // }
                que.push(P(dis[e.to],e.to));
            }
        }
    }
}


int main(){
    cin >> n >> m >> t >> k;
    edge e;
    rep(i, m){
        int from_, to_, cost_, rush_;
        cin >> from_ >> to_ >> cost_ >> rush_;
        --from_;
        --to_;
        e.to = to_; e.cost = cost_; e.rush = rush_;
        G[from_].emplace_back(e);
        e.to = from_;
        G[to_].emplace_back(e);
    }

    dijkstra2(0);

    if(dis[n-1]==LLINF){
        cout << -1 << endl;
    }else{
        cout << dis[n-1] << endl;
    }

    return 0;
}