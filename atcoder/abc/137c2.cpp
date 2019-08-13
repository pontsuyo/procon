#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int n;
    cin >> n;
    map<string, int> mp;
    // vector<ll> vals(n);
    rep(i, n){
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        mp[s]++;
    }
    
    ll ans = 0;
    for (auto u:mp){
        ans += (ll)u.second * (u.second-1)/2;
    }
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}