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
    int a[n];
    rep(i, n){
        cin >> a[i];
    }

    ll s = 0;
    ll ans = 0;
    rep(i, k){
        s += a[i];
    }

    ans += s;
    rep(i, n-k){
        s = s-a[i] + a[i+k];
        ans += s;
    }
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}