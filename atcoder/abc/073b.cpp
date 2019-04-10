#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n; cin >> n;
    int l, r;
    int sum=0;
    rep(i, n){
        cin >> l >> r;
        sum += r-l+1;
    }
    cout << sum << endl;
    return 0;
}