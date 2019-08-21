#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7
#define INF (int) 2e9

int main(){
    int n;
    cin >> n;
    int a[n], aa[n], b[n];

    rep(i, n){
        cin >> a[i];
        aa[i] = a[i];
    }

    sort(a, a+n);

    map<int, int> mp;
    
    mp[a[0]] = 0;
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] != a[i-1]) {
            mp[a[i]] = cnt;
            cnt++;
        }
    }
    
    rep(i, n){
       cout << mp[aa[i]] << endl;
    }
    // printf("%d\n", N);
    return 0;
}