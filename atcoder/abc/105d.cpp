#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i, n){
        cin >> a[i];
        a[i] %= m;
    }
    
    map<ll, ll> mp;
    vector<ll> s(n+1);
    s[0] = 0;
    mp[s[0]%m]++;
    for (int i = 1; i < n+1; i++)
    {
        s[i] = s[i-1] + a[i-1];
        mp[s[i]%m]++;
    }

    ll cnt = 0;
    for (auto u : mp){
        cnt += u.second * (u.second-1)/2;
    }
    cout << cnt << endl;
    return 0;
}