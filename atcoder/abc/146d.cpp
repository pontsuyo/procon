#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

vector<int> edges[100005];
vector<int> vcol[100005];

map<P, int> m;

void bfs(int s, int pcol){
    queue<P> q;
    rep(i, edges[s].size()){
        int tmp = edges[s][i];
        if(vcol[tmp].empty()){
            q.push(P(s, tmp));
        }
    }
    while(!q.empty()){
        P p = q.front(); q.pop();
        
        int col = v[p.first];
        v[p.second] = col;
        v[p.first]++;
        m[p] = col;
        for (int u: edges[p.second])
        {
            q.push(P(p.second, u));
        }
    }
    rep(i, edges[s].size()){
        if(i <pcol){
            edges[s][i].col = i;
        }else{
            edges[s][i].col = i+1;
        }
        
    }
}

int main(){
    int n;
    cin >> n;
    int a[n], b[n];
    rep(i, n){
        cin >> a[i] >> b[i];
        edge e;
        // e.from = a[i];
        e.to = b[i];
        e.col = -1;
        edges[a[i]-1].emplace_back(e);
        // e.from = b[i];
        e.to = a[i];
        edges[b[i]-1].emplace_back(e);
    }

    int k = 0;
    rep(i, 100005){
        chmax(k, (int) edges[i].size());
    }
    cout << k << endl;


    
    cout << n << endl;
    // printf("%d\n", N);
    return 0;
}