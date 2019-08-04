#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int N, T;
    cin >> N >> T;
    int t[N];
    ll ans = 0;
    rep(i, N){
        cin >> t[i];
    }
    for (int i=N-1;i>=1;i--){
        t[i] -=t[i-1];
    }
    rep(i, N){
        ans += min(t[i], T);
    }
    ans += T;

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}