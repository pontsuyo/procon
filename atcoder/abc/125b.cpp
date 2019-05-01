#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n;
    cin >> n;
    int v[n], c[n];
    rep(i, n){
        cin >> v[i];
    }
    rep(i, n){
        cin >> c[i];
    }
    
    int sum = 0;
    rep(i, n){
        if(v[i]-c[i]>0){
            sum += v[i] -c[i];
        }
    }
    cout << sum << endl;
    return 0;
}