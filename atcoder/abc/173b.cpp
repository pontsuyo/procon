#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (1e9+7)
#define INF (int) 1e9
#define LLINF (ll) 1e18

int main(){
    int n;
    cin >> n;
    map<string, int> m;
    rep(i, n){
        string s;
        cin >> s;
        m[s]++;
    }

    printf("AC x %d\nWA x %d\nTLE x %d\nRE x %d\n", m["AC"], m["WA"], m["TLE"], m["RE"]);
    // printf("%d\n", N);
    return 0;
}