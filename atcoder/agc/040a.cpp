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
    string s;
    cin >> s;

    ll n = s.size()+1;

    ll l=0, r=0;
    ll ans = 0;
    rep(i, n-1){
        if(s[i]=='<') l++;
        if(s[i]=='>') r++;
        if(s[i]=='>' && s[i+1]=='<'){
            ll t = max(l, r);
            ll tm = min(l, r);
            ans += t*(t+1)/2 + (tm-1)*tm/2;
            l = 0;
            r = 0;
        }
    }

    ll t = max(l, r);
    ll tm = min(l, r);
    ans += t*(t+1)/2 + (tm-1)*tm/2;
    
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}