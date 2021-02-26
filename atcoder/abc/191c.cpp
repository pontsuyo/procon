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
    int h, w;
    cin >> h >> w;
    string s[h];

    rep(i, h) cin >> s[i];

    int ans = 0;
    rep(hi, h-1) rep(wi, w-1){
        int cnt = 0;
        rep(i, 2) rep(j, 2){
            if(s[hi+i][wi+j]=='#') cnt++;
        }
        if(cnt==1 || cnt==3) ans++;
    }


    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}