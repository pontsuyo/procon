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

#define MAX_N 15
#define MAX_M 15

// ビットDP
int n, m, M;
bool color[MAX_N][MAX_M]; // false:しろ、true:黒

// 現在位置（i, j)ですでに敷き詰められたマスが used
int rec(int i, int j, bool used[MAX_N][MAX_M]){
    if (j==m){
        // 次の行へ
        return rec(i+1, 0, used);
    }

    if( i==n){
        // 全て敷き詰め終わった
        return 1;
    }

    if (used[i][j] || color[i][j]){
        // (i, j)にはブロックを置く必要がない
        return rec(i, j+1, used);
    }

    // 2通りの向きを試す
    int res = 0;
    used[i][j] = true;

    // 横向き
    if(j+1 < m && !used[i][j+1] && !color[i][j+1]){
        used[i][j+1] = true;
        res += rec(i, j+1, used);
        used[i][j+1] = false;
    }

    //縦向き
    if(i+1 < n && !used[i+1][j] && !color[i+1][j]) {
        used[i+1][j] = true;
        res += rec(i, j+1, used);
        used[i+1][j] = false;
    }

    used[i][j] = false;
    return res%M;
}

void solve(){
    bool used[MAX_N][MAX_M];
    memset(used, 0, sizeof(used));// falseで初期化
    printf("%d\n", rec(0, 0, used));
}


int main(){
    cin >> n >> m >> M;

    rep(i, n){
        string s;
        cin >> s;
        rep(j, m){
            if(s[j]=='.'){
                color[i][j] = false;
            }else{
                color[i][j] = true;
            }
        }
    }

    solve();
    return 0;
}