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
		int a[n];
		rep(i, n) cin >> a[i];

		int ans = 0;
	
		rep(l, n){
			int x = a[l];
			repr(r, l, n-1){
				chmin(x, a[r]);

				int tmp = x * (r-l+1);

				chmax(ans, tmp);
			}
		}

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}