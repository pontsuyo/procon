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

  ll a[n], b[n], c[n];
  ll tmp = 0;
  rep(i, n) {
    cin >> a[i] >> b[i];
    tmp += a[i];
  }

  rep(i, n) c[i] = a[i] * 2 + b[i];
  sort(c, c + n, greater<>());

  rep(i, n) {
    if (tmp < 0) {
      cout << i << endl;
      return 0;
    }
    tmp -= c[i];
  }
	cout << n << endl;
  return 0;
}