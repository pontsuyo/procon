#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (1e9+7)
#define INF (int) 1e9
#define LLINF (ll) 1e18

int sara[105];

int main(){
    int n, m;
    cin >> n >> m;
		int a[m], b[m];
		rep(i, m) cin >> a[i] >> b[i];

		int k;
		cin >> k;
		int c[k], d[k];
		rep(i, k) cin >> c[i] >> d[i];
		

		int ans = 0;

		rep(ti, 1<<k){
			rep(i, 105) sara[i] = 0;

			int tti = ti;
			rep(ki, k){
				int ii = tti%2;
				tti /= 2;
				if(ii==0){
					sara[c[ki]]++;
				}else{
					sara[d[ki]]++;
				}
			}

			int tmp = 0;
			rep(mi, m){
				if(sara[a[mi]]>=1 && sara[b[mi]]>=1){
					tmp++;
				}
			}

			chmax(ans, tmp);
		}

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}