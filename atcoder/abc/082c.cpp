#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n; cin >> n;
    int a[100000];
    rep(i, n){
        cin >> a[i];
    }

    map<int, int> mp;
    rep(i, n){
        mp[a[i]]++;
    }

    int ans = 0;
    for(auto p:mp){
        int x = p.first;
        int nx = p.second;
        if (nx<x) ans += nx;
        else ans += nx-x;
    }
    cout << ans << endl;
    return 0;
}