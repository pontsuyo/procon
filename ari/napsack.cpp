#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define MAX_N 100
#define MAX_W 10000


int dp[MAX_N + 1][MAX_W +1];

// i番目以降の品物から重さの総和がj以下となるように選ぶ
int rec(int i, int j){
    if(dp[i][j] >= 0){
        // すでに調べたことがあるならばその結果を再利用
        return dp[i][j];
    }
    int res;
    if(i==N){
        // もう品物は残っていない
        res = 0;
    }else if(j < w[i]){
        // この品物は入らない
        res = rec(i+1, j);
    }else{
        // 入れない場合と入れる場合を両方試す
        res = max(rec(i+1, j), rec(i+1, j-w[i]) + v[i]);
    }
    return dp[i][j] = res;
}

void solve(){
    // まだ調べていないことを表す -1 でメモ化テーブルを初期化
    memset(dp, -1, sizeof(dp));
    printf("%d\n", rec(0, W));
}

int main(){
    
    return 0;
}