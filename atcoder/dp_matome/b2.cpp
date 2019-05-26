#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int N, K;
    cin >> N >> K;
    int h[N];
    rep(i, N){
        cin >> h[i];
    }
    int dp[N];
    dp[0] = 0;
    for(int i=1;i<N;i++){
        int MIN;
        for(int j=1;j<=min(i, K);j++){
            if(j==1){
                MIN = dp[i-j] + abs(h[i] - h[i-j]);
            }else{
                MIN = min(MIN, dp[i-j] + abs(h[i] - h[i-j]));
            }
        }
        dp[i] = MIN;
    }

    printf("%d\n", dp[N-1]);
    return 0;
}