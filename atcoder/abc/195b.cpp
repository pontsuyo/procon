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
	int a, b, w;
	cin >> a >> b >> w;
	w *= 1000;

	int l, r;
	l = ceil((double)w/b);
	r = floor((double)w/a);

	if(l>r){
		cout << "UNSATISFIABLE" << endl;
		return 0;
	}
	cout << l << " " <<  r << endl;
	// printf("%d\n", N);
	return 0;
}