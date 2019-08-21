#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7
#define INF (int) 2e9

int main(){
    int n;
    cin >> n;
    int a[n];
    rep(i, n){
        cin >> a[i];
    }
    int dp[100005] = {};

    dp[0] = 0;
    dp[1] = abs(a[0]-a[1]);

    for (int i = 2; i < n; i++){
        dp[i] = min(abs(a[i]-a[i-1])+dp[i-1], abs(a[i]-a[i-2])+dp[i-2]);
    }
    cout << dp[n-1] << endl;
    // printf("%d\n", N);
    return 0;
}