#include <bits/stdc++.h>
using namespace std;
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

int main() {
  int n;
  cin >> n;
  int N = 1;
  rep(i, n) N *= 2;
  int i1 = 0, i2 = 0;
  int a[N];
  rep(i, N) cin >> a[i];

  int m = 0;
  rep(i, N / 2) {
    if (a[i] > m) {
      m = a[i];
      i1 = i;
    }
  }

	m = 0;
  rep(i, N / 2) {
		int ii = i+N/2;
    if (a[ii] > m) {
      m = a[ii];
      i2 = ii;
    }
  }
	if(a[i1] < a[i2]){
  	cout << i1+1 << endl;
		return 0;
	}
	cout << i2+1 << endl;
  // printf("%d\n", N);
  return 0;
}