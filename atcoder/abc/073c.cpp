#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int n;
    cin >> n;
    // vector<int> a(n);
    map<int, int> mp;
    rep(i, n){
        int tmp;
        cin >> tmp;
        mp[tmp]++;
    }
    int cnt = 0;
    for (auto u : mp){
        if(u.second%2==1) cnt++;
    }
    
    cout << cnt << endl;
    // printf("%d\n", N);
    return 0;
}