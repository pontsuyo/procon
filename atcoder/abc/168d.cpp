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

vector<int> edges[100005];
vector<P> ans(100005);

void bfs(){
    queue<tuple<int, int, int>> que;
    que.push(make_tuple(0, 0, -1));

    while(!que.empty()){
        int d = get<0>(que.front());
        int nod = get<1>(que.front());
        int pa = get<2>(que.front());
        que.pop();

        for (int v : edges[nod]){
            if(ans[v].first==INF){
                que.push(make_tuple(d+1, v, nod));
                ans[v].first = d+1;
                ans[v].second = nod;
            }
        }
    }
}

int main(){
    int n, m;
    cin >> n >> m;

    rep(i, m){
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        edges[a].emplace_back(b);
        edges[b].emplace_back(a);
    }

    rep(i, n){
        ans[i].first = INF;
        ans[i].second = -1;
    }

    bfs();

    bool ok = true;
    rep(i, n){
        if(ans[i].first==INF) ok = false;
    }

    if(ok){
        cout << "Yes" << endl;
        for (int i = 1; i < n; i++)
        {
            cout << ans[i].second+1 << endl;    
        }
    }else{
        cout << "No" << endl;
    }

    return 0;
}