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

// ruiseki
int row[2005][2005], col[2005][2005], naname[2005][2005];
int ans[2005][2005];

int main() {
  int h, w;
  cin >> h >> w;

  string s[h];
  rep(i, h) cin >> s[i];

  ans[0][0] = 1;

  rep(i, h) {
    rep(j, w) {
      if (i == 0 && j == 0) continue;
      if (s[i][j] == '#') continue;

      if (j > 0) {
        row[i][j] = row[i][j - 1] + ans[i][j - 1];
        row[i][j] %= MOD;
      }
      if (i > 0) {
        col[i][j] = col[i - 1][j] + ans[i - 1][j];
        col[i][j] %= MOD;
      }
      if (i > 0 && j > 0) {
        naname[i][j] = naname[i - 1][j - 1] + ans[i - 1][j - 1];
        naname[i][j] %= MOD;
      }

      ans[i][j] += row[i][j];
			ans[i][j] %= MOD;
      ans[i][j] += col[i][j];
			ans[i][j] %= MOD;
      ans[i][j] += naname[i][j];
      ans[i][j] %= MOD;
    }
  }

  cout << ans[h - 1][w - 1] << endl;
  // printf("%d\n", N);
  return 0;
}