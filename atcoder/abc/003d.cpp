#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007


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
    int R, C, X, Y, D, L;
    cin >> R >> C >> X >> Y >> D >> L;

    ll ans = 1;
    rep(i, X*Y){
        ans = ans * (i+1) % MOD;
    }
    // rep(i, X*Y-D){
    //     ans *= mpow(i+1, MOD-2);
    //     ans %= MOD;
    // }
    rep(i, D){
        ans *= mpow(i+1, MOD-2);
        ans %= MOD;
    }

    // rep(i, X*Y-D){
    //     ans = ans * (i+1) % MOD;
    // }
    rep(i, X*Y-D-L){
        ans *= mpow(i+1, MOD-2);
        ans %= MOD;
    }
    rep(i, L){
        ans *= mpow(i+1, MOD-2);
        ans %= MOD;
    }

    ans = ans * (R-X+1)*(C-Y+1) % MOD;
    printf("%lld\n", ans);
    return 0;
}