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
		int a[n], b[n];
		rep(i,n) cin >> a[i];
		rep(i,n) cin >> b[i];

		int ans = 0;
		rep(i, n) ans += a[i]*b[i];
		
		if(ans==0){
    	cout << "Yes" << endl;
			return 0;
		}
		cout << "No" << endl;
    // printf("%d\n", N);
    return 0;
}