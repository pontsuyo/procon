#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    ll n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n), b(n, 0), o(n, 0);
    rep(i, n){
        cin >> a[i];
    }

    rep(i, n){
        for (int j = i+1; j < n; j++){
            if(a[i] > a[j]){
                b[i]++;
            }
        }
    }

    rep(i, n){
        for (int j = 0; j < n; j++){
            if(a[i] > a[j]){
                o[i]++;
            }
        }
    }

    ll ans = 0;
    rep(i, n){
        ans += o[i] * k*(k-1)/2 + b[i] * k;
        ans %= MOD;
        // cout << ans << endl;
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}