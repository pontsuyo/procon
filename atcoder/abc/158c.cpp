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
    double a, b;
    cin >> a >> b;
    rep(i, 10){
        double x = b*10+i;
        if(x>=12.5*a && x < 12.5*a+12.5){
            cout << x << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    // printf("%d\n", N);
    return 0;
}