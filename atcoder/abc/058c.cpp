#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int n;
    cin >> n;
    // int a[n][26] = {};
    map<char, int> mp[n];
    rep(i, n){
        string s;
        cin >> s;
        rep(j, s.size()){
            // a[i][s[j]-'a']++;
            mp[i][s[j]]++;
        }
    }
    rep(j, 26){
        int MIN=50;
        rep(i, n){
            // MIN = min(MIN, a[i][j]);
            MIN = min(MIN, mp[i]['a'+j]);
        }
        rep(i, MIN){
            cout << (char)('a'+j);
        }
    }
    cout << endl;
    // printf("%d\n", N);
    return 0;
}