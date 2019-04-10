#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n; cin >> n;

    vector<ll> l;

    l.emplace_back(2);
    l.emplace_back(1);

    rep(i, n-1){
        l.emplace_back(l[l.size()-1]+l[l.size()-2]);
    }

    cout << l[l.size()-1] << endl;
    return 0;
}