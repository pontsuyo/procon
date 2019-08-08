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
    int A[6] = {4, 8, 15, 16, 23, 42};
    
    // int AA[50] = {};
    // AA[4] = 0;
    // AA[8] = 1;
    // AA[15] = 2;
    // AA[16] = 3;
    // AA[23] = 4;
    // AA[42] = 5;
    map<int, int> AA;
    rep(i, 6){
        AA[A[i]]=i;
    }
    int ans = 0;
    // rep(i, 6){
    //     mp[A[i]] = 0;
    // }
    rep(i, n){
        int a; cin >> a;
        // printf("%d %d %d\n", AA[a], mp[a], mp[A[AA[a]-1]]);
        if(AA[a]>=1 && mp[a] >= mp[A[AA[a]-1]]){
            // printf("%d %d %d\n", AA[a], mp[a], mp[A[AA[a]-1]]);
            continue;
        }else{
            // cout << a << endl;
            mp[a]++;
        }
    }
    // cout << mp[8] << endl;
    int MIN = 5000000;
    
    ans = (n-mp[42]*6);
    cout << ans << endl;
    return 0;
}