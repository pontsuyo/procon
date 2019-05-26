#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int N;
    cin >> N;
    int a[N], b[N], c[N];
    rep(i , N){
        cin >> a[i] >> b[i] >> c[i];
    }

    int dp[N][3];
    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[0][2] = c[0];
    
    for(int i=1;i<N;i++){
        dp[i][0] = max(dp[i-1][1], dp[i-1][2]) + a[i];
        dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + b[i];
        dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + c[i];
    }
    int MAX=0;
    rep(i, 3){
        MAX = max(MAX, dp[N-1][i]);
    }
    printf("%d\n", MAX);
    return 0;
}