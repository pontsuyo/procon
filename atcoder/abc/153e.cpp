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

ll dp[1005][10005];

int main(){
    ll h, n;
	cin >> h >> n;
	ll a[n], b[n];
	rep(i, n){
		cin >> a[i] >> b[i];
	}
	rep(i, n+1){
		rep(j, h+1){
			dp[i][j] = LLINF;
		}
	}

	// for (int j = 1; j <= h; j++)
	// {
	// 	dp[1][j] = (ll)ceil((double)j/a[0]);	
	// }
	for(int i=0;i<n;i++){
        for(int j=1;j<=h;j++){
            if(j <= a[i]){
                dp[i+1][j] = min(dp[i][j], b[i] * (ll)ceil((double)j/a[i]));
            }else{
                dp[i+1][j] = min(dp[i][j], dp[i+1][j-a[i]]+b[i]);

            }
        }
	}
	// rep(i, n+1){
	// 	rep(j, h+1){
	// 		cout << dp[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
    cout << dp[n][h] << endl;
    // printf("%d\n", N);
    return 0;
}