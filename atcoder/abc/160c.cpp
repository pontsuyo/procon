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
    int k, n;
    cin >> k >> n;
    int a[n];
    rep(i, n) cin >> a[i];

    int d[n];
    rep(i, n-1){
        d[i] = a[i+1]-a[i];
    }
    d[n-1] = a[0] + k -a[n-1];

    int dmax = 0;
    rep(i, n){
        chmax(dmax, d[i]);
    }

    cout << k-dmax << endl;
    // printf("%d\n", N);
    return 0;
}