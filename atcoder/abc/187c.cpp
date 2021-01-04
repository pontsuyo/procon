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

  string s;
  set<string> s1, s2;

  rep(i, n) {
    cin >> s;
    if (s[0] != '!') {
      s1.insert(s);
      continue;
    }

    s2.insert(s.substr(1, s.size() - 1));
  }

  for (auto &&si : s1) {
    if (s2.find(si) != s2.end()) {
      cout << si << endl;
      return 0;
    }
  }

  cout << "satisfiable" << endl;
  return 0;
}