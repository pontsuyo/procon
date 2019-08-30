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
    vector<int> r(n);
    rep(i, n){
        cin >> r[i];
    }
    sort(r.begin(), r.end());

    ll ans = 0;
    
    rep(i, n){
        if(i%2==0){
            ans += pow(r[n-i-1], 2);
        }else{
            ans -= pow(r[n-i-1], 2);
        }
    }
    // cout << (double) ans * M_PI << endl;
    printf("%.20f\n", M_PI * ans);
    return 0;
}