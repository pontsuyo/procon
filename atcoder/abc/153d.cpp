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

// 逆元のmod MOD
ll rev_mod(ll num){
	ll pow_num = MOD - 2;
	ll mod_num = MOD;
	ll pow_cur = num;
	ll ret = 1;
	while(pow_num > 0){
		if(pow_num % 2 == 1){
			ret *= pow_cur;
			ret %= mod_num;
		}
		pow_cur *= pow_cur;
		pow_cur %= mod_num;
		pow_num /= 2;
	}
	return ret;
}

ll mpow(ll a, ll n) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * a;
        a = a * a;
        n >>= 1;
    }
    return res;
}

int main(){
    ll h;
    cin >> h;

	ll cnt = 0;
	while(h>0){
		h/=2;
		cnt++;
	}
	
    cout << mpow(2, cnt)-1 << endl;
    // printf("%d\n", N);
    return 0;
}