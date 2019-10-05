#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n;
    while(cin >> n){

        int dp[5][4005] = {};

        dp[0][0] = 1;
        for (int i = 1; i <= 4004; i++){
            dp[0][i] = 0;
        }

        rep(i, 4){
            for (int j = 0; j <= 4000; j++) {
                for (int k = 0; k <= min(j, 1000); k++) {
                    dp[i+1][j] += dp[i][j-k];
                }
            }
        }
        cout << dp[4][n] << endl;
        // printf("%d\n", N);
    }
    return 0;
}