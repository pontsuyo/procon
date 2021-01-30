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

// 拝借元: https://coonevo.hatenablog.com/entry/2020/03/19/174849
template <typename T>
class BIT {
 public:
  int N;
  vector<T> data;
  BIT(T _N) : N(_N) { data.assign(N + 1, 0); };

  // a is 1-indexed
  void add(int a, T w) {
    for (int x = a; x <= N; x += x & -x) data[x] += w;
  }
  // 1-indexed sum of prefix [0, a]
  T sum(int a) {
    T res = 0;
    for (int x = a; x > 0; x -= x & -x) res += data[x];
    return res;
  }
  // 1-indexed sum of range [l, r]
  T sum(int l, int r) { return sum(r) - sum(l - 1); }

  // 0-indexed add
  void add0(int a, T w) { add(a + 1, w); }
  // 0-indexed sum
  T sum0(int a) { return sum(a + 1); }
  // 0-indexed sum of range
  T sum0(int l, int r) { return sum0(r) - sum0(l - 1); }
  // show the value
  void debug() { print(data); }
};

int main() {
  int N;
  cin >> N;
  vector<ll> a(N), b(N);
  vector<pair<ll, int>> ap;
  rep(i, N) {
    cin >> a[i];
    ap.push_back(make_pair(a[i], i));
  }
  sort(ap.begin(), ap.end());
  rep(i, N) b[ap[i].second] = i;
  BIT<long long> c(N);

  ll ans0 = 0;
  rep(i, N) {
    ans0 += i - c.sum0(b[i]);
    c.add0(b[i], 1);
  }

  cout << ans0 << endl;

  rep(i, N - 1) {
    ans0 += (N - 1 - a[i]) - (a[i]);
    cout << ans0 << endl;
  }
}
