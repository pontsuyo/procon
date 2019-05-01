#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n;
    cin >> n;
    ll a[n];
    ll MIN = 1e9;
    rep(i, n){
        cin >> a[i];
        MIN = min(MIN, abs(a[i]));
    }

    int cnt = 0;
    rep(i, n){
        if(a[i]<0){
            cnt++;
        }
    }

    ll sum = 0;
    if(cnt%2==0){
        rep(i, n){
            sum += abs(a[i]);
        }
    }else{
        rep(i, n){
            sum += abs(a[i]);
        }
        sum -= MIN*2;
    }
    cout << sum << endl;
    return 0;
}