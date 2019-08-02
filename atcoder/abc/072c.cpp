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
        int tmp;
        cin >> tmp;
        if(tmp>=1) mp[tmp-1]++;
        mp[tmp]++;
        mp[tmp+1]++;
    }

    int MAX = 0;
    for(auto u:mp){
        MAX = max(MAX, u.second);
    }
    cout << MAX << endl;
    // printf("%d\n", N);
    return 0;
}