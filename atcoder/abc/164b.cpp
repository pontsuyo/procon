#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    while(true){
        c -= b;
        if(c<=0){
            cout << "Yes" << endl;
            return 0;
        }
        a-=d;
        if(a<=0){
            cout << "No" << endl;
            return 0;
        }
    }
    // printf("%d\n", N);
    return 0;
}