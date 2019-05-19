#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int t; cin >> t;
    rep(i, t){
        int n; cin >> n;
        vector <ll> a, b;
        rep(j, n){
            ll c;
            cin >> c;
            a.push_back(c); 
        }
        sort(a.begin(), a.end());
        ll x = a[0]*a[n-1];
        for(ll j=2;j<=sqrt(x);j++){
            if(x%j==0){
                b.push_back(j);
                if(x/j != j) b.push_back(x/j);
            }
        }
        sort(b.begin(), b.end());
        if(a==b) cout << x << endl;
        else cout << -1 << endl;
    }
    return 0;
}