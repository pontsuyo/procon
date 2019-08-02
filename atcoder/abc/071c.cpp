#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int n;
    cin >> n;
    map<int, int> mp;
    rep(i, n){
        int c;
        cin >> c;
        mp[c]++;
    }

    // int L1=0, L2=0;
    int L1, L2;
    for(auto u:mp){
        if(u.second>=2 && u.first>L1){
            L1 = u.first;
        }
    }
    mp[L1] -= 2;
    for(auto u:mp){
        if(u.second>=2 && u.first>L2){
            L2 = u.first;
        }
    }
    cout << (ll)L1*L2 << endl;
    return 0;
}