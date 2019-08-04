#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    ll n, k;
    cin >> n >> k;
    map<ll, ll> mp;
    rep(i, n){
        ll a, b;
        cin >> a >> b;
        mp[a] += b;
    }

    ll cnt = 0;
    for (auto u: mp){
        cnt += u.second;
        if(cnt>=k){
            cout << u.first << endl;
            return 0;
        }
    }
}