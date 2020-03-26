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
    int n, m;
    cin >> n >> m;
    
    for (int c = 0; c*4 <= m; c++) {
        if((n-c)*2+c*4==m){
            printf("%d %d %d\n", n-c, 0, c);
            return 0;
        }
    }
    m-=3;
    n-=1;
    for (int c = 0; c*4 <= m; c++) {
        if((n-c)*2+c*4==m){
            printf("%d %d %d\n", n-c, 1, c);
            return 0;
        }
    }

    printf("-1 -1 -1\n");
    return 0;
}