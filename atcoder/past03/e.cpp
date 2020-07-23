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

vector<int> edges[205];
vector<int> c(100005);

int main(){
    int n, m, q;
    cin >> n >> m >> q;
    rep(i, m){
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        edges[u].emplace_back(v);
        edges[v].emplace_back(u);
    }

    rep(i, n) cin >> c[i];

    rep(qi, q){
        int q_;
        cin >> q_;
        if(q_==1){
            int x;
            cin >> x;
            x--;
            cout << c[x] << endl;
            for (auto vi : edges[x]){
                c[vi] = c[x];
            }
            
        }else{
            int x, y;
            cin >> x >> y;
            x--;
            cout << c[x] << endl;
            c[x] = y;
            
        }
    }
    // printf("%d\n", N);
    return 0;
}