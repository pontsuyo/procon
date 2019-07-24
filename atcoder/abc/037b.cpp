#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int n, q;
    cin >> n >> q;
    vector<int> v(n, 0);
    rep(i, q){
        int l, r, t;
        cin >> l >> r >> t;
        for(int j=l-1; j<=r-1; j++){
            v[j] = t;
        }
    }
    
    rep(i, n){
        cout << v[i] << endl;
    }
    // printf("%d\n", N);
    return 0;
}