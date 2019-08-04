#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    ll n;
    cin >> n;
    ll ans = 11;
    for (ll i=1; i<=sqrt(n); i++){
        if(n%i==0){
            ll ot = n/i;
            ll cnt = 0;
            while(ot>0){
                ot /= 10;
                cnt++;
            }
            ans = min(ans, cnt);
        }
    }
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}