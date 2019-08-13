#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int n;
    cin >> n;
    
    ll T=1, A=1;
    rep(i, n){
        ll t, a;
        cin >> t >> a;
        ll m = max((T-1)/t, (A-1)/a)+1;
        T = m*t;
        A = m*a;
    }

    cout << T+A << endl;
    // printf("%d\n", N);
    return 0;
}