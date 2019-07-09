#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    ll N;
    cin >> N;
    ll ans = 1;
    for(ll i=1;i<=N;i++){
        ans *= i;
        ans %= MOD;
    }
    printf("%d\n", ans);
    return 0;
}