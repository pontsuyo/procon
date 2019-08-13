#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int n;
    cin >> n;
    map<char, int> mp[n];
    vector<char> chs[n];
    vector<ll> lls(n, 0);
    // vector<ll> vals(n);
    rep(i, n){
        string s;
        cin >> s;
        chs[i] = {};
        rep(j, s.size()){
            chs[i].emplace_back(s[j]);
        }
        sort(chs[i].begin(), chs[i].end());
        rep(j, 10){
            lls[i] += (ll)(chs[i][j]-'a')*(ll)pow(26,j);
        }
    }
    
    ll cnt = 1;
    sort(lls.begin(), lls.end());
    ll ans = 0;
    rep(i, n-1){
        if(lls[i]==lls[i+1]){
            cnt++;
        }else{
            ans += cnt*(cnt-1)/2;
            cnt=1;
        }
    }
    ans += cnt*(cnt-1)/2;

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}