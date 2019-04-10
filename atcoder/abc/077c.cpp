#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n; cin >> n;
    vector <int> a(n, 0);
    vector <int> b(n, 0);
    vector <int> c(n, 0);
    rep(i, n){
        cin >> a[i];
    }
    rep(i, n){
        cin >> b[i];
    }
    rep(i, n){
        cin >> c[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    ll res = 0;
    rep(i, n){
        ll l = lower_bound(a.begin(), a.end(), b[i]) -a.begin();
        ll r = n - (upper_bound(c.begin(), c.end(), b[i]) -c.begin());
        res += l*r;
    }
    cout << res << endl;
    return 0;
}