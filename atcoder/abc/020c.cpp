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
vector <edge> G[105];

int d[105];
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
    int h, w, t;
    cin >> h >> w >> t;

    string s[h];
    rep(i, h) cin >> s[i];

    int si, sj, gi, gj;
    rep(i, h)rep(j, w){
        if(s[i][j]=='S'){
            si = i;
            sj=j;
        }
        if(s[i][j]=='G'){
            gi = i;
            gj=j;
        }
    }

    rep(i, h) rep(j, w){
        int v = i*h+j;
        if(j>0) G[v].emplace_back(v-1);
        if(j<w-1) G[v].emplace_back(v+1);
        if(i>0) G[v].emplace_back(v-w);
        if(i<h-1) G[v].emplace_back(v+w);
    }

    dijkstra2(si*h+sj);
    


    cout << n << endl;
    // printf("%d\n", N);
    return 0;
}