#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007

int main(){
    ll n, m, k;
    cin >> n >> m >> k;

    if ( k * 2 > n*m ) k = n*m - k;
    ll dividend = 1;
    ll divisor  = 1;
    for (int i = 1; i <= k; ++i ) {
        dividend *= (n*m-i+1);
        divisor  *= i;
    }
    // ll dividend / divisor;

    printf("%d\n", dividend / divisor);
    return 0;
}