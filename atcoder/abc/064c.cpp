#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int n;
    cin >> n;
    map<int, int> mp;
    rep(i, n){
        int t;
        cin >> t;
        if(t>=3200){
            mp[8]++;
        }else{
            mp[t/400]++;
        }
    }
    int ans = 0;
    rep(i, 8){
        if(mp[i]>0) ans++;
    }
    if(ans==0){
        cout << 1 << " " << mp[8] << endl;        
    }else{
        cout << ans << " " << ans+mp[8] << endl;
    }
    // printf("%d\n", N);
    return 0;
}