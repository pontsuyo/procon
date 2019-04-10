#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    ll n, m;
    cin >> n >> m;
    if(n==1 && m==1){
        cout << 1 << endl;
    }else if(n==1 || m==1){
        cout << max(n,m)-2 << endl;
    }else{
        cout << (n-2)*(m-2) << endl;
    }
    return 0;
}