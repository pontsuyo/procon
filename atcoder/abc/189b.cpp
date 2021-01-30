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
    int n, x;
    cin >> n >> x;

		double tmp = 0;

		rep(i, n){
			double v, p;
			cin >> v >> p;
			tmp += v * p/100;
			if(tmp > (double) x){
		    cout << i+1 << endl;
				return 0;
			}
		}
    cout << -1 << endl;
    // printf("%d\n", N);
    return 0;
}