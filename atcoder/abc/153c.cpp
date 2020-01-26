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

int main(){
    int n, k;
    cin >> n >> k;
	int h[n];
	rep(i, n){
		cin >> h[i];
	}
	sort(h, h+n);

	ll sum = 0;
	rep(i, n-k){
		sum += h[i];
	}
    cout << sum << endl;
    // printf("%d\n", N);
    return 0;
}