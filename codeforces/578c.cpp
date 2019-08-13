#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    ll n, m;
    int q;
    cin >> n >> m >> q;

    ll GCD = __gcd(n, m);
    ll ni = m/GCD;
    ll mi = n/GCD;
    ll lc = ni/__gcd(ni, mi)*mi;

    rep(i, q){
        int x;
        ll y;
        vector<ll> bs(2, 0);
        rep(j, 2){
            cin >> x >> y;
            if(x==1){
                bs[j] = (y*ni-1)/lc;
            }else{
                bs[j] = (y*mi-1)/lc;
            }
        }
        // cout << bs[0] << bs[1] << endl;
        if(bs[0]==bs[1]){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    // printf("%d\n", N);
    return 0;
}