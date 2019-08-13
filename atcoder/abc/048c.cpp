#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int n;
    ll x;
    cin >> n >> x;
    ll a[n];
    rep(i, n){
        cin >> a[i];
    }

    ll ans = 0;
    ll tmp;
    if(a[0]>x){
        tmp = a[0]-x;
        ans += tmp;
        a[0] -= tmp;
    }
    for (int i = 0; i < n-1; i++){
        tmp = a[i]+a[i+1] - x;
        if(tmp>0){
            a[i+1] -= tmp;
            ans += tmp;
        }
    }

    cout << ans << endl;
}

