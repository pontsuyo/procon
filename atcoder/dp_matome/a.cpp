#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

#define MAX_N 100000

int N;
int h[MAX_N];
int dp[MAX_N+1];

int main(){
    cin >> N;
    rep(i, N){
        cin >> h[i];
    }

    dp[0] = 0;
    dp[1] = abs(h[1]-h[0]); 
    for(int i=2;i<N;i++){
        dp[i] = min(dp[i-1] + abs(h[i] - h[i-1]), dp[i-2] + abs(h[i] - h[i-2]));
    }

    cout << dp[N-1] << endl;
    return 0;
}