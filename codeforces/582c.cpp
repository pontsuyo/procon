#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int q;
    cin >> q;
    rep(i, q){
        ll n, m;
        cin >> n >> m;

        ll ans = 0;
        ll num = n/(m*10);
        ll rem = n % (m*10);
        
        int ama = m%10;
        if (ama==5) {
            ans += num * 25;
        } else if (ama==0) {
            ans = 0;
        } else if (ama%2==0) {
            ans += num * 40;
        } else {
            ans += num * 45;
        }

        for (ll i = m; i <= rem ; i+=m){
            ans += i%10;
        }
        cout << ans << endl;
    }
    return 0;
}