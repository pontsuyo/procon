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
	int t;
	cin >> t;
	rep(ti, t){
		int n;
		cin >> n;
		string s[3];
		rep(i, 3){
			cin >> s[i];
		}
		cout << "1";
		rep(i, n) cout << "0";
		rep(i, n) cout << "1";
		cout << endl;
	}

	// printf("%d\n", N);
	return 0;
}