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
    int a[n];
    rep(i, n) cin >> a[i];

    int gcdd[1005];
    rep(i, 1005) gcdd[i] = 0;
    int ans = a[0];
    for (int i = 2; i <= 1000; i++){
        
        rep(j, n){
            if(a[j]%i==0){
                gcdd[i]++;
            }
        }
        if(gcdd[ans] < gcdd[i]){
            ans = i;
            // printf("%d %d\n", ans, i);
        }
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}