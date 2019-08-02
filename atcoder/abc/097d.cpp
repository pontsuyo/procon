#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> p(n);
    rep(i, n){
        cin >> p[i];
    }

    vector<int> x(m), y(m);
    rep(i, m){
        cin >> x[i] >> y[i];
    }

    
    cout << n << endl;
    // printf("%d\n", N);
    return 0;
}