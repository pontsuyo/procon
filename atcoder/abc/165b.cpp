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
#define LLINF (ll) 2e18

int main(){
    ll x;
    cin >> x;
    ll tmp = 100;
    int cnt = 0;
    while(x > tmp){
        cnt++;
        tmp = (ll)(1.01 * tmp);
    }
    
    cout << cnt << endl;
    // printf("%d\n", N);
    return 0;
}