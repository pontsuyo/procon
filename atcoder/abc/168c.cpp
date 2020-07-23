#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (1e9+7)
#define INF (int) 1e9
#define LLINF (ll) 1e18

int main(){
    double a, b, h, m;
    cin >>  a >> b >> h >> m;

    double t1, t2;
    t1 = h * 30 + m/60 * 30;
    t2 = m * 6;

    // cout << sqrt(a*a + b*b -2 * a * b * cos(abs(t2-t1)/360 *2* M_PI)) << endl;
    printf("%10.20lf\n", sqrt(a*a + b*b -2 * a * b * cos(abs(t2-t1)/360 *2* M_PI)));
    return 0;
}