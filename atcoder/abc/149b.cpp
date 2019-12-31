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
    ll a, b, k;
    cin >> a >> b >> k;
    if(a>k){
        printf("%lld %lld\n", a-k, b);
    }else{
        if(a+b>k){
            printf("%lld %lld\n", 0, a+b-k);
        }else{
            printf("%lld %lld\n", 0, 0);
        }
    }
    // printf("%d\n", N);
    return 0;
}