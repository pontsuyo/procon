#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int N;
    cin >> N;
    int D[N][N];
    rep(i, N){
        rep(j, N){
            cin >> D[i][j];
        }
    }
    int Q; cin >> Q;
    vector<int> P(Q);
    rep(q, Q){
        cin >> P[q];
    }

    // 累積和をdpで
    int dp[N+1][N+1] = {0};
    for(int i=N;i>=0;--i){
        for(int j=N;j>=0;--j){
            if(i==N || j==N){
                dp[i][j]=0;
            }else{
                dp[i][j] = dp[i+1][j] + dp[i][j+1] - dp[i+1][j+1] + D[i][j];
            }
        }
    }

    rep(q, Q){
        int maxh = min(P[q], N);
        int sum;
        int summax = 0;
        for(int i=1;i<=maxh;++i){
            int w = min(P[q]/i, N);
            rep(j, N-i+1){
                rep(k, N-w+1){
                    // sum = 0;
                    // rep(l, i){
                    //     rep(m, w){
                    //         sum += D[j+l][k+m];
                    //     }
                    // }

                    sum = dp[j][k] - dp[j+i][k] - dp[j][k+w] + dp[j+i][k+w];

                    summax = max(sum, summax);
                }
            }
        }
        cout << summax << endl;
    }
    return 0;
}