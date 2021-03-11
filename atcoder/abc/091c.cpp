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

bool ascend_by_second(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second < b.second;
    }else{
        return a.first < b.first;
    }
}

bool descend_by_second(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second){
        return a.second > b.second;
    }else{
        return a.first > b.first;
    }
}

bool b[205][205];

int main(){
	int n; cin >> n;
	vector<P> r(n);

	rep(i, n){
		int ta, tb;
		cin >> ta >> tb;
		r[i] = P(ta, tb);
	}

	rep(i, n){
		int tc, td;
		cin >> tc >> td;
		b[tc][td] = true;
	}

	sort(all(r), descend_by_second);

	int ans = 0;
	rep(i, n){
		int tx = r[i].first;
		int ty = r[i].second;

		bool done = false;
		for (int xi = tx+1; xi < 2*n; xi++){
			for (int yi = ty+1; yi <2*n; yi++){
				if(!b[xi][yi]) continue;
				b[xi][yi] = false;
				ans++;
				done = true;
				break;
			}
			
			if(done) break;
		}	
	}

	cout << ans << endl;
	// printf("%d\n", N);
	return 0;
}