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

int c[1000];

int main(){
    int n, k;
    cin >> n >> k;
    
    rep(i, k){
        int d; cin >> d;
        rep(j, d){
            int a;
            cin >> a;
            a--;
            c[a]++;
        }
    }

    int ans = 0;
    rep(i, n){
        if(c[i]==0) ans++;
    }
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}