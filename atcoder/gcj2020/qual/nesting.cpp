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
    int t;
    cin >> t;
    rep(i, t){
        string s;
        cin >> s;
        int n = s.size();
        int a[n+2];
        a[0]=0, a[n+1]=0;
        rep(i, n){
            a[i+1] = s[i]-'0';
        }

        string ans = "";
        rep(i, n+1){
            int d = a[i+1]-a[i];
            if(d>0) rep(i, d) ans += "(";
            if(d<0) rep(i, -d) ans += ")";
            ans += s[i];
        }
        
        printf("Case #%d: %s\n", i+1, ans.c_str());
    }
    return 0;
}