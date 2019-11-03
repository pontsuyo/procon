#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

// #define INT_MAX 1001001001
const int MAX_N = 1001001;

// セグメント木を持つグローバル配列
int n, dat[2*MAX_N-1], idx[2*MAX_N-1];

// 初期化
void init(int n_){
    // 簡単のため要素数を２のべき乗に
    n = 1;
    while(n < n_) n*=2;

    for(int i=0; i<2*n-1;i++) dat[i] = 0;
    for(int i=0; i<n; i++) idx[i+(n-1)] = i;
}

// k番目の値(0-indexed)をaに変更
void update(int k, int a){
    // 葉の節点
    k += n-1;
    dat[k] += a;
    // 登りながら更新
    while(k>0){
        k = (k-1)/2;
        if(dat[k*2+1] < dat[k*2+2]){
            idx[k] = idx[k*2+2];
        }else{
            idx[k] = idx[k*2+1];
        }
        dat[k] = dat[idx[k]+n-1];
    }
}

// [a, b)の最小値を求める．後ろの方の引数は，計算の簡単のための引数．
// kは節点の番号，l, r はその節点が[l, r)に対応づいていることを表す．
// したがって，外からはquery(a, b, 0, 0, n)として呼ぶ．
void query(int a, int b, int k, int l, int r){
    if(r-l==1) return;
    // そうでなければ，２つの子の最小値
    query(a, b, k*2+1, l, (l+r)/2);
    query(a, b, k*2+2, (l+r)/2, r);

    if(dat[k*2+1] < dat[k*2+2]){
        idx[k] = idx[k*2+2];
    }else{
        idx[k] = idx[k*2+1];
    }
    dat[k] = dat[idx[k]+n-1];
    return;
}

int main(){
    int N, q;
    cin >> N >> q;
    init(N);
    rep(i, q){
        int a, v;
        cin >> a >> v;
        a--;
        update(a, v);
        query(0, n, 0,0,n);
        cout << idx[0]+1 << " " << dat[0] << endl;
    }
    return 0;
}