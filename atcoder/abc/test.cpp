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
    // int n;
    rep(i, 10) rep(j, 10){
        printf("%d %d \n", i, j);
        cout << (i|j) << endl;
        cout << (i||j) << endl;
    }

    // printf("%d\n", N);
    return 0;
}