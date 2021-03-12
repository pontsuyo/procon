#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int)(1e9 + 7)
#define INF (int)1e9
#define LLINF (ll)1e18

int op(int a, int b) { return a^b; }

int e() { return 0; }

int main(){
	int n, q;
	cin >> n >> q;

	vector<int> a(n);
	rep(i, n) cin >> a[i];

	segtree<int, op, e> seg(a);

	rep(qi, q){
		int t, x, y;
		cin >> t >> x >> y;
		if(t==1){
			x--;

			seg.set(x, seg.get(x)^y);
		}else{
			x--;
			y--;
			cout << seg.prod(x, y+1) << endl;		
		}
	}
	// printf("%d\n", N);
	return 0;
}