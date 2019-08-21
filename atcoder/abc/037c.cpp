#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7
#define INF (int) 2e9

int main(){
    int n, k;
    cin >> n >> k;
    ll a[n];
    rep(i, n){
        cin >> a[i];
    }
    ll ans = 0;
    if(k>n/2) k = n-k+1;
    rep(i, n){
        if(i<k){
            ans += a[i] * (i+1);
        }else if(i >= n-k){
            ans += a[i] * (n-i);
        }else{
            ans += a[i]*k;
        }
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}