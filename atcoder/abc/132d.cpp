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
    int N, K;
    cin >> N >> K;
    for(int i=1;i<=K;i++){
        if(N-K+1<i){
            cout << 0 << endl;
        }else{
            ll ans = 1;
            rep(j, K-1){
                ans *= j+1;
                ans %= MOD;
            }
            rep(j, K-i){
                ans *= mpow(j+1, MOD-2);
                ans %= MOD;
            }
            
            rep(j, i-1){
                ans *= mpow(j+1, MOD-2);
                ans %= MOD;
            }

            rep(j, N-K+1){
                ans *= j+1;
                ans %= MOD;
            }
            rep(j, i){
                ans *= mpow(j+1, MOD-2);
                ans %= MOD;
            }
            
            rep(j, N-K+1-i){
                ans *= mpow(j+1, MOD-2);
                ans %= MOD;
            }            
            printf("%d\n", ans);
        }
    }
    return 0;
}