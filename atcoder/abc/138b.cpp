#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7
#define INF (int) 2e9

int main(){
    int n;
    cin >> n;
    int a[n];
    rep(i, n){
        cin >> a[i];
    }
    double s = 0;
    rep(i, n){
        s += (double)1 /a[i];
    }

    // cout << n << endl;
    printf("%.20lf\n", 1/s);
    return 0;
}