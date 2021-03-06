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
    string s;
    cin >> n >> s;

    int r=0, g=0, b=0;
    rep(i, n){
        if(s[i]=='R') r++;
        if(s[i]=='G') g++;
        if(s[i]=='B') b++;
    }

    ll ans = (ll) r * g * b;

    rep(i, n){
        rep(j, n){
            if(i<j){
                int k = j*2-i;
                if(k<n && s[i] != s[j] && s[j] != s[k] && s[k] != s[i]){
                    ans--;
                }
            }
        }
    }
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}