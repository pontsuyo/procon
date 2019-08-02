#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int)1e9 + 7

int main(){
    int n, m;
    cin >> n >> m;
    if(abs(n-m)>1){
        cout << 0 << endl;
        return 0;
    }

    ll ans;
    if(abs(n-m)==1){
        ans = 1;
    }else{
        ans = 2;
    }
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
        ans %= MOD;
    }
    for (int i = 1; i <= m; i++)
    {
        ans *= i;
        ans %= MOD;
    }

    cout << ans << endl;
    return 0;
}