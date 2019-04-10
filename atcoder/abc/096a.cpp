#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)

int main(){
    int a, b;
    cin >> a >> b;
    if(a<=b){
        cout << a << endl;
    }else{
        cout << a-1 << endl;
    }
    return 0;
}