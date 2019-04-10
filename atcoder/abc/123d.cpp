#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int x, y, z, k;
    cin >> x >> y >> z >> k;
    vector<ll> a(x), b(y), c(z);
    rep(i, x) cin >> a[i]; 
    rep(i, y) cin >> b[i];
    rep(i, z) cin >> c[i];

    vector <ll> ab;
    rep(i,x){
        rep(j,y){
            ab.push_back(a[i]+b[j]);
        }
    }

    sort(ab.begin(), ab.end());
    reverse(ab.begin(), ab.end());

    vector <ll> abc;
    rep(i, min(k, (int)ab.size())){
        rep(j, z){
            abc.push_back(ab[i] + c[j]);
        }
    }

    sort(abc.begin(), abc.end());
    reverse(abc.begin(), abc.end());

    rep(i, k){
        cout << abc[i] << endl;
    }
    return 0;
}