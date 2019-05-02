#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

#define MAX_Q 100

int P, Q, A[MAX_Q+2];

int dp[MAX_Q+1][MAX_Q+2];

void solve(){
    A[0] = 0;
    A[Q+1] = P+1;

    for(int q=0;q<=Q;q++){
        dp[q][q+1] = 0;
    }
    for(int w=2; w<=Q+1; w++){
        for(int i=0; i+w<=Q+1; i++){
            int j=i+w, t = INT_MAX;

            for(int k=i+1; k<j; k++){
                t = min(t, dp[i][k] + dp[k][j]);
            }

            dp[i][j] = t + A[j] - A[i] -2;
        }
    }

    printf("%d\n", dp[0][Q+1]);
}

int main(){
    cin >> P >> Q;
    rep(i, Q){
        cin >> A[i+1];
    }
    solve();
    return 0;
}