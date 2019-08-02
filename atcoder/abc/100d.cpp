#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int n, m;
    cin >> n >> m;
    
    vector<ll> x(n), y(n), z(n), s(n);
    rep(i, n){
        cin >> x[i] >> y[i] >> z[i];
    }

    ll ans = 0;
    for (int i = 0; i < 1<<3; i++){
        int ax, ay, az;
        if(i&1){
            ax = 1;
        }else{
            ax = -1;
        }
        if(i>>1 &1){
            ay = 1;
        }else{
            ay = -1;
        }
        if(i>>2&1){
            az = 1;
        }else{
            az = -1;
        }

        rep(i, n){
            s[i] = ax*x[i] + ay*y[i] + az*z[i];
        }
        sort(s.begin(), s.end(), greater<>());
        
        ll su= 0;
        rep(i, m){
            su += s[i];
        }
        ans = max(ans, su);
    }
    
    cout << ans << endl;
    return 0;
}