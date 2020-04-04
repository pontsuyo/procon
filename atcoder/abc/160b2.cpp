#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

int main(){
    int n, x, y;
    cin >> n >> x >> y;

    int dist[n][n];

    rep(i, n) rep(j, n) dist[i][j] = abs(j-i);
    
    rep(i, n) rep(j, n){
        dist[i][j] = min(dist[i][j], dist[i][x]+dist[y][j]+1);
    }
    cout << n << endl;
    // printf("%d\n", N);
    return 0;
}