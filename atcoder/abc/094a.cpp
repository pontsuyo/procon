#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)

int main(){
    int a, b, x;
    cin >> a >> b >> x;
    if(a+b>=x && a <=x){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}