#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)

struct UnionFind {
    vector<int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2
    vector<int> rank;

    UnionFind(int N) : par(N), rank(N) { //最初は全てが根であるとして初期化
        for(int i = 0; i < N; i++){
            par[i] = i;
            rank[i] = 0;
        }
    }

    int root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
        if (par[x] == x){
            return x;
        }else{
            return par[x] = root(par[x]);
        }
    }

    void unite(int x, int y) { // xとyの木を併合
        x = root(x); //xの根をrx
        y = root(y); //yの根をry
        if (x == y) return; //xとyの根が同じ(=同じ木にある)時はそのまま
        if (rank[x] < rank[y]){
            par[x] = y; 
        }else{
            par[y] = x; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
        }
        if(rank[x] == rank[y]) rank[x]++;
    }

    bool same(int x, int y){ // 2つのデータx, yが属する木が同じならtrueを返す
        return root(x) == root(y);
    }
};


int main(){
    // int MAX = 403;
    int h, w;
    cin >> h >> w;
    
    char m[h*w];
    rep(i, h*w){
        cin >> m[i];
    }

    UnionFind uf(h*w);
    
    rep(i,h*w){
        if(i%w != 0 && m[i]!=m[i-1]){
            uf.unite(i-1, i);
        }
        if(i>=w && m[i]!=m[i-w]){
            uf.unite(i-w, i);
        }
    }

    int c[h*w] = {0};
    int s[h*w] = {0};
    rep(i,h*w){
        if(m[i]=='.'){
            c[uf.root(i)]++;
        }else{
            s[uf.root(i)]++;
        }
    }

    ll sum = 0;
    rep(i,h*w){
        sum += (ll)c[i] * (ll)s[i];
    }
    cout << sum << endl;
}