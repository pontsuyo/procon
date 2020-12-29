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
#define MAX_N 1000005

int main() {
  ll n;
  cin >> n;

  vector<pair<ll, ll>> v;
  for (ll i = 2; i * i <= n; i++) {
    if (n % i != 0) continue;
    int cnt = 0;

    while (n % i == 0) {
      cnt++;
      n /= i;
    }
    v.emplace_back(make_pair(i, cnt));
  }
  if (n != 1) v.emplace_back(make_pair(n, 1));

  int ans = 0;
  for (auto &&vi : v) {
    ll pi = vi.first;
    ll ei = vi.second;
    int tmp = 0;
    int t = 1;
    while (ei >= t) {
      tmp++;
			ei -= t;
      t++;
    }
		ans += tmp;
  }

  cout << ans << endl;
  // printf("%d\n", N);
  return 0;
}