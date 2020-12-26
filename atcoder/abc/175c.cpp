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
  ll x, k, d;
  cin >> x >> k >> d;

  if (x < 0) x = -x;

  if (x / d > k) {
    cout << x - k * d << endl;
    return 0;
  }

  ll tk = k - x / d;
  ll tx = x - x / d * d;
  if (tk % 2 == 0) {
    cout << tx << endl;
    return 0;
  }
  cout << d - tx << endl;
  return 0;
}