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
#define MOD (int) (1e9+7)
#define INF (int) 1e9
#define LLINF (ll) 1e18

int op(int a, int b) { return max(a, b); }

int e() { return -1; }

int n, q;
int target;

bool f(int v) { return v < target; }

int main(){
	cin >> n >> q;

	vector<int> a(n);
	rep(i, n) cin >> a[i];

	segtree<int, op, e> seg(a);

	rep(qi, q){
		int t, x, v;
		cin >> t >> x >> v;
		if(t==1){
			seg.set(--x, v);
		}else if(t==2){
			cout << seg.prod(--x, v) << endl;
		}else{
			target = v;
			cout << seg.max_right<f>(--x) + 1 << endl;
		}
	}
	return 0;
}