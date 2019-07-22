#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m), b(m), l(m);
    rep(i, m){
        cin >> a[i] >> b[i] >> l[i];
    }

    vector<int> s[k];
    rep(i, k){
        cin >> s[i];
    }
    
    cout << n << endl;
    // printf("%d\n", N);
    return 0;
}