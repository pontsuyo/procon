#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    rep(i, n){
        cin >> x[i];
    }
    rep(i, n){
        cin >> y[i];
    }
    
    sort(x.begin(), x.end(), greater<int>());
    sort(y.begin(), y.end(), less<int>());


    ll sum=0;
    rep(i, n){
        sum += (ll)x[i]*y[i];
    }

    cout << sum << endl;
    return 0;
}