#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int n;
    cin >> n;
    ll t;
    ll ans = 1;
    rep(i, n){
        cin >> t;
        ans = ans/__gcd(ans,t) * t;
    }
    cout << ans << endl;
    return 0;
}