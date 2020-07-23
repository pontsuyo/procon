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
#define MAX_V 2000000
#define LLINF (ll) 1e18

typedef pair<int, int> P;

struct edge{int to, cost;};
vector <edge> G[MAX_V];

int d[MAX_V];
int V;

void dijkstra2(int s){
    priority_queue<P, vector<P>, greater<P> > que;
    fill(d, d+V, INF);
    d[s] = 0;
    que.push(P(0,s));

    while(!que.empty()){
        P p=que.top(); que.pop();
        int v=p.second;
        if(d[v] < p.first) continue;
        for(int i=0; i<(int)G[v].size(); ++i){
            edge e = G[v][i];
            if(d[e.to] > d[v] + e.cost){
                d[e.to] = d[v] + e.cost;
                que.push(P(d[e.to],e.to));
            }
        }
    }
}

int main(){
    int n, x, y;
    cin >> n >> x >> y;
    x += 200;
    y += 200;

    V = 406*406;
    int dx[6] = {1, 0, -1, 1, -1, 0};
    int dy[6] = {1, 1, 1, 0, 0, -1};

    rep(xi, 405){
        rep(yi, 405){
            int from_ = xi*405 + yi;
            rep(di, 6){
                int nxi = xi+dx[di];
                int nyi = yi+dy[di];
                if(nxi<0 || nxi>404 || nyi<0 || nyi>404) continue;

                edge e;
                e.to = nxi*405 + nyi;
                e.cost = 1;
                G[from_].emplace_back(e);
            }
        }
    }

    rep(ni, n){
        int xi, yi;
        cin >> xi >> yi;
        xi += 200;
        yi += 200;
        int from_ = xi*405 + yi;
        vector<edge> tmpe;
        for (edge ei : G[from_]){
            edge e_;
            e_.to = ei.to;
            e_.cost = INF;
            tmpe.emplace_back(e_);
        }
        G[from_] = tmpe;
    }

    dijkstra2(200*405+200);

    int ans = d[x*405+y];
    if(ans>=INF){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }
    return 0;
}
