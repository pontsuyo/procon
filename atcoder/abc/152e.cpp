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


vector<ll> factors[1100000];

int main(){
    for(int i = 2; i <= 1000100; i++){
		if(factors[i].size() == 0){
			for(int j = i; j <= 1000100; j += i){
				factors[j].push_back(i);
			}
		}
	}

    int n;
    cin >> n;
    map<ll, ll> m;

    ll tmplcm = 1;
    ll a[n];
    ll tmpp = 1, tmpr;
    rep(i, n){
        cin >> a[i];
        ll tmp = a[i];

        for(ll num : factors[tmp]){
			ll cnt = 0;
			while(tmp % num == 0){
				cnt += 1;
				tmp /= num;
			}
			m[num] = max(m[num], cnt);
		}
    }

    ll s = 1;
    for (auto p : m){
        rep(i, p.second){
            s *= p.first;
            s %= MOD;
        }
    }
    
    ll ans = 0;
    rep(i, n){
        ans += s * rev_mod(a[i]) % MOD;
        ans %= MOD;
    }
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}