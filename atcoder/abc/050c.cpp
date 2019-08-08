#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    rep(i, n){
        int tmp;
        cin >> tmp;
        mp[tmp]++;
    }

    map<int, int> mmp;
    if(n%2==0){
        for(int i=1;i<n;i+=2){
            mmp[i]+=2;
        }
    }else{
        mmp[0]=1;
        for(int i=2;i<n;i+=2){
            mmp[i]+=2;
        }
    }

    if(mp.size()!=mmp.size()){
        cout << 0 << endl;
        return 0;
    }
    for(auto q:mp){
        if(q.second != mmp[q.first]){
            cout << 0 << endl;
            return 0;
        }
    }

    ll ans = 1;
    rep(i, n/2){
        ans *= 2;
        ans %= MOD;
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}