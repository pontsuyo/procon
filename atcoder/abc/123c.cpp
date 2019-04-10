#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    ll n;
    cin >> n;
    ll a[5];
    ll MAX = 0;
    ll up;
    rep(i, 5){
        cin >> a[i];
        if(n % a[i] != 0){
            up = n/a[i] + 1;
        }else{
            up = n/a[i];
        }
        MAX = max(MAX, up);
    }

    cout << 4+MAX << endl;
    return 0;
}