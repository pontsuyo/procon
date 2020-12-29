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

  int a[n];
  rep(i, n) cin >> a[i];

  sort(a, a + n);

  ll ans = 0;
  if (n % 2 == 0) {
    rep(i, n / 2 - 1) ans += -2 * a[i];
    ans += -1 * a[n / 2 - 1];
    ans += 1 * a[n / 2];
    rep(i, n / 2 - 1) ans += 2 * a[i + n / 2 + 1];
    cout << ans << endl;
    return 0;
  }

  rep(i, n / 2) ans += -2 * a[i];
  rep(i, 2) ans += +1 * a[i + n / 2];
  rep(i, n / 2 - 1) ans += 2 * a[i + n / 2 + 2];

  ll tmp = 0;
  rep(i, n / 2 - 1) tmp += -2 * a[i];
  rep(i, 2) tmp += -1 * a[i + n / 2 - 1];
  rep(i, n / 2) tmp += 2 * a[i + n / 2 + 1];

  cout << max(ans, tmp) << endl;
  return 0;
}