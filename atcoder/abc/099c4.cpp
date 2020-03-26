#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

int main(){
    int n;
    cin >> n;

    int ans = INF;
    for (int i = 0; i <= n; i++) {
        int cnt = 0;
        int t = i;
        while(t>0){
            cnt += t %6;
            t /= 6;
        }
        t = n-i;
        while(t>0){
            cnt += t%9;
            t /= 9;
        }
        chmin(ans, cnt);
    }
    
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}