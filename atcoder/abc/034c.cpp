#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7
// #define MOD 1000000007
#define INF 2000000000

ll mpow(ll x, ll n){
    ll ans = 1;
    while(n != 0){
        if(n&1) ans = ans*x % MOD;
        x = x*x % MOD;
        n = n >> 1;
    }
    return ans;
}

int main(){
    int w, h;
    cin >> w >> h;

    ll ans = 1;
    for (int i = h; i <= w+h-2; i++) {
        ans *= i;
        ans %= MOD;
    }

    for (int i = 1; i <= w-1; i++) {
        ans *= mpow(i, 1);
        ans %= MOD;
    }

    cout << ans << endl;
    return 0;
}