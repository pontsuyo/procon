#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int t;
    cin >> t;
    rep(i, t){
        int n; cin >> n;
        map<int, int> mp;

        // vector<int> a(n);
        rep(j, n){
            int a; cin >> a;
            mp[a%3]++;
        }
        int ans = mp[0];
        if(mp[2]<=mp[1]){
            ans += mp[2];
            ans += (mp[1]-mp[2])/3;
        }else{
            ans += mp[1];
            ans += (mp[2]-mp[1])/3;
        }
        cout << ans << endl;
    }
    // printf("%d\n", N);
    return 0;
}