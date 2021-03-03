#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (1e9+7)
#define INF (int) 1e9
#define LLINF (ll) 1e18

ld dp[105][105][105];

ld dfs(int p, int q, int r){
    if(dp[p][q][r]!=0.0) return dp[p][q][r];
    if(p==100 || q == 100 || r == 100){
        return 0;    
    }
    ld e = (ld)p/(p+q+r) * dfs(p+1, q, r) + (ld)q/(p+q+r) * dfs(p, q+1, r) + (ld)r/(p+q+r) * dfs(p, q, r+1) + 1;
    dp[p][q][r] = e;
    return e;
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    // cout << dfs(a, b, c) << endl;
    printf("%.10Lf\n", dfs(a, b, c));
    return 0;
}