#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)
// #define MOD (int) 1e9 + 7
#define MOD 1000000007

int main(){
    int N, M;
    cin >> N >> M;
    int a[M];
    bool v[N+1];
    rep(i, N+1){
        v[i] = true; 
    }
    rep(i, M){
        cin >> a[i];
        v[a[i]] = false;
    }
    
    ll dp[N+1] = {};
    dp[0] = 1;
    if(v[1]){
        dp[1] = 1;
    }else{ 
        dp[1] = 0;
    }

    for(int i=2;i<=N;i++){
        if(v[i]){
            dp[i] = (dp[i-1] % MOD) + (dp[i-2] % MOD);
        }else{
            dp[i] = 0;
        }
    }
    // rep(i, N+1){
    //     printf("%d\n", dp[i]);
    // }
    // printf("%d\n", dp[N]);
    printf("%d\n", dp[N] % MOD);
    return 0;
}