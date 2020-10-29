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
#define MAX_N 100000


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


ll loopsums[5005];
ll loopsize[5005];

int main(){
    int n, k;
    cin >> n >> k;
    int p[n], c[n];
    rep(i, n) cin >> p[i];
    rep(i, n) p[i]--;
    rep(i, n) cin >> c[i];

    UnionFind uf;
    uf.init(n);

    rep(i, n){
        uf.unite(i, p[i]);
    }

    rep(i, n){
        loopsums[uf.root(i)] += c[i];
        loopsize[uf.root(i)]++;
    }

    ll ans = -LLINF;
    rep(ni, n){
        int si = ni;
        ll tmpmax = -LLINF;
        
        ll nloop = k/loopsize[uf.root(si)];
        ll namari = k%loopsize[uf.root(si)];
        if(namari==0) namari = k;

        ll tmpsum = 0;
        int st = si;
        rep(ai, namari){
            st = p[st];
            tmpsum += c[st];
            chmax(tmpmax, tmpsum);
        }

        if(loopsums[uf.root(si)] > 0){
            tmpmax += loopsums[uf.root(si)]*nloop;
        }

        chmax(ans, tmpmax);
    }
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}