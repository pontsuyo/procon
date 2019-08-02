#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007
#define MAX_N 10000


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


int main(){
    int n, m;
    cin >> n >> m;
    int a[m], b[m];
    rep(i, m){
        cin >> a[i] >> b[i];
        a[i]--;
        b[i]--;
    }

    int cnt = 0;
    rep(i, m){
        UnionFind u, v;
        u.init(n);
        v.init(n);
        rep(j, m){
            if(i!=j){
                u.unite(a[j], b[j]);
                v.unite(a[j], b[j]);
            }
        }
        v.unite(a[i], b[i]);

        set<int> su, sv;
        rep(j, n){
            su.insert(u.root(j));
            sv.insert(v.root(j));
        }
        if(su.size()==2 && sv.size()==1) cnt++;
    }

    cout << cnt << endl;
    return 0;
}