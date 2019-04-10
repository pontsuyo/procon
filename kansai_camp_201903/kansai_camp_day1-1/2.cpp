#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int t;
    cin >> t;
    rep(i, t){
        double m, d;
        cin >> m >> d;
        double v = m/d;
        double pi = acos(-1.0);
        double r = pow(v*3/4 / pi, (double)1/3);
        printf("Case %d: %.4f\n", i+1, pi * 4 * pow(r, 2));
    }
    return 0;
}