#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int n;
    cin >> n;
    ll ans;
    rep(i, n){
        ll a; cin >> a;
        if(i==0){
            ans = a;
        }else{
            ans = __gcd(ans, a);
        }
    }

    ll cnt = 0;
    for (ll i = 1; i <= sqrt(ans); i++)
    {
        if(ans%i==0){
            if(i==sqrt(ans)){
                cnt++;
            }else{
                cnt += 2;
            }
        }
    }
    
    cout << cnt << endl;
    // printf("%d\n", N);
    return 0;
}