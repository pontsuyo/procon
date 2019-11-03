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
    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;
    rep(i, n){
        string s;
        int d;
        cin >> s >> d;
        int sign = 1;
        if(s=="West"){
            sign = -1;
        }
        d = max(a, min(d, b));
        
        ans += sign * d;
    }

    if(ans>0){
        cout << "East " << ans << endl;
    }else if(ans<0){
        cout << "West " << -ans << endl;
    }else{
        cout << 0 << endl;
    }
    // printf("%d\n", N);
    return 0;
}