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
  int r1, c1, r2, c2;
  cin >> r1 >> c1 >> r2 >> c2;

  if (r1 == r2 && c1 == c2) {
    cout << 0 << endl;
    return 0;
  }

  if (r1 + c1 == r2 + c2 || r1 - c1 == r2 - c2 ||
      abs(r1 - r2) + abs(c1 - c2) <= 3) {
    cout << 1 << endl;
    return 0;
  }

  if ((abs(r1 - r2) + abs(c1 - c2)) % 2 == 0) {
    cout << 2 << endl;
    return 0;
  }

  if ((abs(r1 - r2) + abs(c1 - c2)) <= 6) {
    cout << 2 << endl;
    return 0;
  }

  rep(i, 7) {
    int tmpr1 = r1 + i - 3;
    if (abs(tmpr1 - r2) == abs(c1 - c2)) {
      cout << 2 << endl;
      return 0;
    }
  }

  
  cout << 3 << endl;
  return 0;
}