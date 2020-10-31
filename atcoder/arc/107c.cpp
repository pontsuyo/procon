#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (998244353)
#define INF (int) 1e9
#define LLINF (ll) 1e18
#define MAX_N 100

struct UnionFind{
    ll par[MAX_N]; // 親
    ll rank[MAX_N]; // 木の深さ
    ll siz[MAX_N]; // 素集合のサイズ

    // n要素で初期化
    void init(ll n){
        for(ll i=0;i<n;i++){
            par[i] = i;
            rank[i] = 0;
            siz[i] = 1;
        }
    }

    // 木の根を求める
    ll root(ll x){
        if(par[x] == x){
            return x;
        }else{
            return par[x] = root(par[x]);
        }
    }

    // xとyの属する集合を併合
    bool unite(ll x, ll y){
        x = root(x);
        y = root(y);
        if(x==y) return false; // 併合失敗
        if(rank[x] < rank[y]){
            par[x] = y;
            siz[y] += siz[x];
        }else{
            par[y] = x;
            siz[x] += siz[y];
            if(rank[x] == rank[y]) rank[x]++;
        }
        return true; // 併合成功
    }

    bool issame(ll x, ll y){
        return root(x)==root(y);
    }

    ll size(ll x){
        return siz[root(x)];
    }
};

ll modfact(ll n){
    ll ans = 1;
    for (ll i = 1; i <= n; i++){   
        ans *= i;
        ans %= MOD;
    }
    return ans;
}

int main(){
    int n, k;
    cin >> n >> k;

    int a[n][n];
    rep(i, n) rep(j, n) cin >> a[i][j];

    UnionFind ufrow, ufcol;
    ufrow.init(n);
    ufcol.init(n);

    // row
    repr(i, 0, n-1){
        repr(j, i+1, n-1){
            bool ok = true;
            rep(kk, n){
                if(a[i][kk] + a[j][kk] > k){
                    ok = false;
                }
            }
            if(ok) ufrow.unite(i, j);
        }
    }

    //col 
    repr(i, 0, n-1){
        repr(j, i+1, n-1){
            bool ok = true;
            rep(kk, n){
                if(a[kk][i] + a[kk][j] > k){
                    ok = false;
                }
            }
            if(ok) ufcol.unite(i, j);
        }
    }

    set<ll> srow, scol;
    ll ans = 1;
    rep(i, n){
        ll r = ufrow.root((ll)i);
        if(srow.find(r)!=srow.end()) continue;
        ans *= modfact(ufrow.size(r));
        ans %= MOD;
        srow.insert(r);
    }

    rep(i, n){
        ll r = ufcol.root((ll)i);
        if(scol.find(r)!=scol.end()) continue;
        ans *= modfact(ufcol.size(r));
        ans %= MOD;
        scol.insert(r);
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}