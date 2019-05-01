#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

ll mod_pow1(ll x, ll n, ll mod){
    ll res = 1;
    while(n>0){
        if(n & 1) res = res*x %mod;
        x = x*x%mod;
        n >>=1;
    }
    return res;
}

ll mod_pow2(ll x, ll n, ll mod){
    if(n==0) return 1;
    ll res = mod_pow2(x*x%mod, n/2, mod);
    if(n & 1) res = res * x % mod;
    return res;
}

int main(){
    ll x, n, mod;
    cin >> x >> n >> mod;
    cout << mod_pow2(x, n, mod) <<  endl;
    return 0;
}