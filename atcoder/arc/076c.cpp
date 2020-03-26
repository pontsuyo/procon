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

ll modfact(ll n){
    ll ans = 1;
    for (ll i = 1; i <= n; i++){   
        ans *= i;
        ans %= MOD;
    }
    return ans;
}

int main(){
    int n, m;
    cin >> n >> m;
    if(abs(n-m)==1){
        cout << (modfact(n) * modfact(m))%MOD << endl;
    }else if(n==m) {
        cout << ((modfact(n) * modfact(m))%MOD *2)%MOD << endl;
    }else{
        cout << 0 << endl;
    }
    // printf("%d\n", N);
    return 0;
}