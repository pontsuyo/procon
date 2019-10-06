#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n;
    cin >> n;
    int a[n];
    rep(i, n){
        cin >> a[i];
    }

    int l[n], r[n];
    l[0]=a[0];
    r[n-1]=a[n-1];

    // l[i]: a[i]までのgcd
    for (int i = 0; i < n-1; i++) {
        l[i+1] = __gcd(l[i], a[i+1]);
    }
    // rep(i, n){
    //     cout << l[i] << " ";
    // }

    /// r[i]: a[i]までのgcd
    for (int i = n - 1; i >= 1; i--) {
        r[i-1] = __gcd(r[i], a[i-1]);
    }
    
    int ans = l[n-1];
    rep(i, n){
        if(i==0){
            ans = max(ans, r[1]);
        }else if(i==n-1){
            ans = max(ans, l[n-2]);
        } else {
            ans = max(ans, __gcd(l[i-1], r[i+1]));
        }
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}