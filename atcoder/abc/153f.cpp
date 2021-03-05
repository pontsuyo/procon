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

ll s[200005];

int main(){
    int n, d, a;
    cin >> n >> d >> a;

    P teki[n];
	for (auto &&i : teki){
		cin >> i.first >> i.second;
	}
	
    sort(teki, teki+n);

	int migihashi[n];
    rep(i, n){
        int a = teki[i].first + 2*d;
        
        int l = 0, r=n;
        while(r-l>1){
            int m = (l+r)/2;
			if(teki[m].first > a){
				r = m;
			}else{
				l = m;
			}
        }
		migihashi[i] = l;
    }

	ll ans = 0;
	rep(i, n){
		teki[i].second -= s[i];
		if(teki[i].second > 0){
			int cnt = (teki[i].second+a-1)/a;
			ans += cnt;
			s[i] += cnt*a;
			s[migihashi[i]+1] -= cnt*a;
		}
		s[i+1] += s[i];
	}

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}