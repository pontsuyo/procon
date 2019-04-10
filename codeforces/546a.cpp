#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n;
    cin >> n;
    int l[n], r[n];
    rep(i, n){
        cin >> l[i] >> r[i];
    }
    int k; cin >> k;
    int s=0;
    rep(i, n){
        // if(k<l[i]){
        //     cout << n-i+1 << endl;
        //     return 0;
        // }
        if(r[i]>=k){
            s += 1;
        }
    }
    cout << s << endl;
    return 0;
}