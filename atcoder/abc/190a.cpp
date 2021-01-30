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
  int a, b, c;
  cin >> a >> b >> c;

  if (c == 0) {
    if (a > b) {
      printf("Takahashi\n");
      return 0;
    }else{
			printf("Aoki\n");
			return 0;
		}
  }else{
    if (a < b) {
      printf("Aoki\n");
      return 0;
    }else{
			printf("Takahashi\n");
			return 0;
		}
	}
}