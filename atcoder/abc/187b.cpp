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

int main(){
    int n;
    cin >> n;
		double x[n], y[n];

		rep(i, n) cin >> x[i] >> y[i];
		
		int ans = 0;
		rep(i, n) rep(j, n){
			if(i<=j)continue;
			double a = (y[j]-y[i])/(x[j]-x[i]);
			if(a <= 1 && a >= -1) ans++;
		}
		

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}