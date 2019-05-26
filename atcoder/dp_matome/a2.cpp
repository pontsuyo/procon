#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int N;
    cin >> N;
    int h[N];
    rep(i, N){
        cin >> h[i];
    }
    int dp[N];
    dp[0] = 0;
    dp[1] = abs(h[1]-h[0]);
    for(int i=2;i<N;i++){
        dp[i] = min(dp[i-1] + abs(h[i]-h[i-1]), dp[i-2] + abs(h[i]-h[i-2]));
    }
    printf("%d\n", dp[N-1]);
    return 0;
}