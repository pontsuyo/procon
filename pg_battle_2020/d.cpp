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
#define LLINF (ll) 1e18
#define MAX_V 100005
#define INF 1000000000
typedef tuple<int, int, vector<int>> T;

struct edge{int to, cost;};
vector <edge> G[MAX_V];

int d[MAX_V];
int V, E;
// priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>> > vectorque;
vector<vector<int>> vectorque;

void dijkstra2(int s){
    // queの中身は頂点．P<最短距離, 頂点番号>で格納されている．
    // greater<P> を指定することでfirstが小さい順に取り出せるようにする
    priority_queue<T, vector<T>, greater<T> > que;
    fill(d, d+V, INF);
    d[s] = 0;
    vector<int> vi, vtmp;
    vi.emplace_back(0);
    que.push(T(0,s,vi));

    while(!que.empty()){
        T t=que.top(); que.pop();
        int v=get<1>(t);
        if(d[v] < get<0>(t)) continue;
        for(int i=0; i<G[v].size(); ++i){
            edge e = G[v][i];
            vtmp = get<2>(t);
            if(d[e.to] > d[v] + e.cost){
                d[e.to] = d[v] + e.cost;

                if(e.to==V-1){
                    vtmp.emplace_back(e.to);
                    // vectorque.push(vtmp);
                    vectorque.emplace_back(vtmp);
                }

                vtmp.emplace_back(e.to);
                que.push(T(d[e.to],e.to, vtmp));
            }
        }
    }
}

int main(){
    cin >> V >> E;

    set<P> abset;
    rep(i, E){
        int a, b;
        cin >> a >> b;
        abset.insert(P(a, b));
    }

    for (auto pi : abset)
    {
        int a = pi.first;
        int b = pi.second;

        a--;
        b--;

        edge e;
        e.to=b;
        e.cost=1;
        G[a].emplace_back(e);
    }

    dijkstra2(0);

    if(d[V-1]==INF){
        printf("-1\n");
        return 0;      
    }

    // sort(vectorque.begin(), vectorque.end());

    vector<int> ans = vectorque[0];
    rep(i, vectorque.size()-1){
        vector<int> vtmp = vectorque[i+1];
        if(vtmp.size()!=ans.size()) continue;
        rep(j, ans.size()){
            if(vtmp[j] < ans[j]) {
                ans = vtmp;
                break;
            }
        }
    }
    
    // vector<int> vans = vectorque[0];
    // vector<int> vans = vectorque.top();

    rep(i, ans.size()){
        if(i!=ans.size()-1){
            printf("%d ", ans[i]+1);
        }else{
            printf("%d\n", ans[i]+1);
        }
    }
    // cout << d[n-1] << endl;
    // printf("%d\n", N);
    return 0;
}