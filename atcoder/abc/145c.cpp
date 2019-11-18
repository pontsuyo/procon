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
    int n;
    cin >> n;
    double x[n], y[n];
    rep(i, n){
        cin >> x[i] >> y[i];
    }

    double s = 0;
    rep(i, n){
        rep(j, n){
            if(i<j){
                s += sqrt(pow(x[i]-x[j], 2) + pow(y[i]-y[j], 2));
            }
        }
    }
    // cout << s*2/n << endl;
    printf("%.10lf\n", s*2/n);
    return 0;
}