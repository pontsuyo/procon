#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll s=0;
    rep(i, n){
        cin >> a[i];
        s += a[i];
    }

    vector<ll> mod;
    for (ll i = 1; i <=sqrt(s); i++)
    {
        if(s%i==0){
            mod.emplace_back(i);
            mod.emplace_back(s/i);
        }
    }
    sort(mod.begin(), mod.end(), greater<>());

    for (int i = 0; i < mod.size(); i++){
        ll m = mod[i];
        ll cnt=0;
        vector<ll> amari(n);
        rep(j, n){
            amari[j] = a[j]%m;
        }
        sort(amari.begin(), amari.end());
        ll l=0, r = n-1;
        while(l<r){
            if(amari[l] < m-amari[r]){
                cnt += amari[l];
                amari[r] += amari[l];
                amari[l] = 0;
                l++;
            }else{
                cnt += (m-amari[r]);
                amari[l] -= (m-amari[r]);
                amari[r] = m;
                r--;
            }
        }
        if(cnt<=k){
            cout << m << endl;
            return 0;
        }
    }
}