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
        int t;
        cin >> t;
        if(t%4==0){
            mp[2]++;
        }else if(t%2==0){
            mp[1]++;
        }else{
            mp[0]++;
        }
    }

    
    if(mp[1]==0){
        if(mp[2]+1>=mp[0]){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }else{
        if(mp[2]>=mp[0]){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    return 0;
}