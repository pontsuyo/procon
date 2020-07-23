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
    ll a, r, n;
    cin >> a >> r >> n;
    
    n--;
    ll a0 = a;
    // if(a==1){
    //     cout << "large" << endl;
    //     return 0;
    // }
    while (n > 0) {
        
        if (n & 1) a = a * r;
        // if(r>1000000000 && a != 1){
        //     cout << "large" << endl;
        //     return 0;
        // }
        r = r * r;
        if(a>1000000000 || a<a0){
            cout << "large" << endl;
            return 0;
        }
        n >>= 1;

        // printf("a: %lld\n", a);
    }

    cout << a << endl;

    return 0;
}