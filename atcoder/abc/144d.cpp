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
    int a, b, x;
    cin >> a >> b >> x;

    if(x <= a*a*b/2){
        double s = (double) a*b/2;
        double t = (double) x/s;
        // cout << atan2((double)b, t) /M_PI * 180 << endl;
        printf("%.10f", atan2((double)b, t) /M_PI * 180);
        return 0;
    }else{
        int y = a*a*b-x;
        double s = (double) a*a/2;
        double t = (double) y/s;
        // cout << atan2(t, (double)a) /M_PI * 180 << endl;
        printf("%.10f", atan2(t, (double)a) /M_PI * 180);
        return 0;
    }
}