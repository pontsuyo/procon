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
vector <edge> G[MAX_n];

ll d[MAX_n];
int n, m, t, k;

void dijkstra2(int s){
    priority_queue<P, vector<P>, greater<P> > que;
    fill(d, d+n, LLINF);
    d[s] = 0;
    que.push(P(0,s));

    while(!que.empty()){
        P p=que.top(); que.pop();
        int v=p.second;
        if(d[v] < p.first) continue;
        for(int i=0; i<G[v].size(); ++i){
            edge e = G[v][i];

            int c_ = e.cost;
            if(d[e.to] > d[v] + c_){
                if(!(d[e.to] <= t-e.rush+k-c_ || t+e.rush-k<=d[e.to])){
                    c_ =  c_+t+e.rush-k;
                }

                d[e.to] = d[v] + c_;
                
                que.push(P(d[e.to],e.to));
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

    if(d[n-1]==LLINF){
        cout << -1 << endl;
    }else{
        cout << d[n-1] << endl;
    }

    return 0;
}