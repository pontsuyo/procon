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
	int n, m;
	cin >> n >> m;
	vector<int> h(n), w(m);
	rep(i, n) cin >> h[i];
	rep(i, m) cin >> w[i];

	sort(all(h));

	int nt = (n-1)/2;
	vector<int> d1(nt, 0), d2(nt, 0);
	vector<int> s1(nt+1, 0), s2(nt+1, 0);

	rep(i, nt){
		d1[i] = h[i*2+2] - h[i*2+1];
		d2[i] = h[i*2+1] - h[i*2];
	}

	rep(i, nt){
		s1[i+1] = s1[i] + d1[i];
		s2[i+1] = s2[i] + d2[i];
	}
	
	int ans = INF;
	rep(i, m){
		auto id = lower_bound(all(h), w[i]) - h.begin();
		int nl = id/2;

		int tmp = 0;
		tmp += s2[nl];

		int nr = (n-id)/2;
		tmp += s1[nt] - s1[nt-nr];

		if(id%2==0){
			tmp += h[id]-w[i];
		}else{
			tmp += w[i] - h[id-1];
		}

		chmin(ans, tmp);
	}

	printf("%d\n", ans);
	return 0;
}