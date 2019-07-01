#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int xa, ya, xb, yb, xc, yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    xb -= xa;
    yb -= ya;
    xc -= xa;
    yc -= ya;

    printf("%f\n",abs(xb*yc-yb*xc)/2.);
    return 0;
}