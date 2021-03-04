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

int n;
vector<vector<int>> es;
vector<int> a, b;

vector<int> depth;
vector<ll> dp;

void depthdfs(int a, int d){
    depth[a] = d;
    for (auto next : es[a])
    {
        if(depth[next]==-1){
            depthdfs(next, d+1);    
        }
    }
}

void imosDfs(int a, ll now){
    now += dp[a];
    dp[a] = now;
    for (auto next : es[a])
    {
        if(depth[next] > depth[a]){
            imosDfs(next, now);
        }
    }   
}

int main(){
    cin >> n;
    es.resize(n);
    a.resize(n-1);
    b.resize(n-1);
    depth = vector<int>(n, -1);
    dp = vector<ll>(n, 0);

    rep(i, n-1){
        cin >> a[i] >> b[i];
        a[i]--; b[i]--;
        es[a[i]].push_back(b[i]);
        es[b[i]].push_back(a[i]);
    }

    depthdfs(0, 0);

    int q; cin >> q;
    rep(qi, q){
        int t, e, x;
        cin >> t >> e >> x;
        e--;

        int va, vb;
        if(t==1){
            va = a[e];
            vb = b[e];
        }else{
            va = b[e];
            vb = a[e];
        }

        if(depth[va] < depth[vb]){
            dp[0] += x;
            dp[vb] -= x;
        }
        else{
            dp[va] += x;
        }
    }

    imosDfs(0, 0);

    rep(i, n) cout << dp[i] << endl;
    
    return 0;
}