#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int n;
    cin >> n;
    ll a[n];
    ll s = 0;
    rep(i, n){
        cin >> a[i];
        s += a[i];
    }

    ll MIN = 2002002002002002002;
    ll s_=0;
    rep(i, n){
        s_ += a[i];
        if(i<n-1){
            MIN = min(MIN, abs(s_-(s-s_)));
        }
    }
    cout << MIN << endl;
    // printf("%d\n", N);
    return 0;
}