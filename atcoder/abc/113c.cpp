#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

int main(){
    int n, m;
    cin >> n >> m;
    ll p[100000], y[100000];
    vector <int> yd[100001];
    
    rep(i, m){
        cin >> p[i] >> y[i];
        yd[p[i]].emplace_back(y[i]);
    }
    rep(i,n){
        sort(yd[i+1].begin(), yd[i+1].end());
    }
    rep(i,m){
        printf("%012lld\n", p[i]*1000000 + lower_bound(yd[p[i]].begin(), yd[p[i]].end(), y[i]) - yd[p[i]].begin() +1);
    }

    return 0;
}