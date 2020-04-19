#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

bool memo[405][405];
ll dp[405][405];
ll s[405];

ll f(int l, int r){
    if(memo[l][r]) return dp[l][r];
    memo[l][r] = true;

    if(l==r) return 0;

    ll fans = (ll)2e18;
    for (int i = l; i < r; i++){
        fans = min(fans, f(l, i)+f(i+1, r));
    }
    dp[l][r] = fans + s[r]-s[l-1];   
    return dp[l][r];
}

int main(){
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];
    rep(i, n){
        s[i+1] = s[i] + a[i];
    }
    cout << f(1, n) << endl;
    // printf("%d\n", N);
    return 0;
}