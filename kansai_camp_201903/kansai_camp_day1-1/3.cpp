#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int t; cin >> t;
    rep(i, t){
        float r;
        cin >> r;
        printf("Case %d: %.4f\n", i+1, r*r/4);
    }
    return 0;
}