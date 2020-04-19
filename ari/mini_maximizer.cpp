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

int n, m;
int s[500005], t[500005];

int dp[50005], dat[4*50005];

// 初期化
void init(int n_){
    // 簡単のため要素数を２のべき乗に
    int nnn = 1;
    while(nnn < n_) nnn*=2;

    // すべての値をINT_MAXに．
    for(int i=0; i<2*nnn-1;i++) dat[i] = 20;
}

// k番目の値(0-indexed)をaに変更
void update(int k, int a){
    // 葉の節点
    k += n-1;
    dat[k] = a;
    // 登りながら更新
    while(k>0){
        k = (k-1)/2;
        dat[k] = min(dat[k*2+1], dat[k*2+2]);
    }
}

// [a, b)の最小値を求める．後ろの方の引数は，計算の簡単のための引数．
// kは節点の番号，l, r はその節点が[l, r)に対応づいていることを表す．
// したがって，外からはquery(a, b, 0, 0, n)として呼ぶ．
int query(int a, int b, int k, int l, int r){
    // [a, b)と[l, r)が交差しなければ，INT_MAX
    if(r <= a || b <= l) return INF;

    // [a, b)が[l, r)を完全に含んでいればこの節点の値
    if(a <= l && r <= b) return dat[k];
    else{
        // そうでなければ，２つの子の最小値
        int vl = query(a, b, k*2+1, l, (l+r)/2);
        int vr = query(a, b, k*2+2, (l+r)/2, r);
        return min(vl, vr);
    }
}


void solve(){
    init(n);
    fill(dp, dp+n+1, INF);
    dp[1]=0;
    update(0, 0);
    for (int i = 0; i < m; i++) {
        printf("%d %d\n", dp[t[i]], query(s[i]-1, t[i]+1, 0, 0, n)+1);
        int v = min(dp[t[i]], query(s[i]-1, t[i]+1, 0, 0, n)+1);
        dp[t[i]] = v;
        update(t[i]-1, v);
        // cout << dp[t[i]] << endl;
        rep(i, n+1){
            cout << dat[i+n-1] << " ";
        }
        cout << endl;
    }
    printf("%d\n", dp[n+1]);
}


int main(){
    cin >> n >> m;
    rep(i, m){
        cin >> s[i] >> t[i];
    }
    solve();
    return 0;
}