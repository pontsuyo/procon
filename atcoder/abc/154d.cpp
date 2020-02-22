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
    int n, k;
    cin >> n >> k;
    double p[n];
    rep(i, n){
        cin >> p[i];
        p[i] = (p[i]+1)/2;
    }

    double MAX;

    double tmp = 0;
    rep(i, k){
        tmp += p[i];
    }
    MAX = tmp;

    rep(i, n-k+1){
        tmp = tmp-p[i]+p[i+k];
        chmax(MAX, tmp);
    }

    // cout << MAX << endl;
    printf("%lf\n", MAX);
    return 0;
}