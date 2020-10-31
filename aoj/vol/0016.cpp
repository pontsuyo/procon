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
    int d, a;
    double x=0.0, y=0.0;
    int theta=90;
    while(true){
        scanf("%d,%d", &d, &a);
        if(d==0 && a==0){
            printf("%.0lf\n%.0lf", x, y);
            return 0;
        }

        x += cos((double) theta * M_PI /180) * d;
        y += sin((double) theta * M_PI /180) * d;
        theta -= a;
    }    
}