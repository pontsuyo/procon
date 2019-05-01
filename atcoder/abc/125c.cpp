#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n;
    cin >> n;
    int a[n];
    rep(i, n){
        cin >> a[i];
    }
    int l[n], r[n];
    l[0]=0, r[n-1]=0;

    for(int i=0;i<n;i++){
        if(i!=0){
            l[i] = __gcd(l[i-1], a[i-1]);
        }
    }
    for(int i=n-1;i>=0;i--){
        if(i!=n-1){
            r[i] = __gcd(r[i+1], a[i+1]);
        }
    }
    int MAX = 0;
    rep(i, n-1){
        MAX = max(MAX, __gcd(l[i], r[i]));
    }
    cout << MAX << endl;
    return 0;
}