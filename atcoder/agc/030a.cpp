#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int a, b, c;
    cin >> a  >> b >> c;
    if(b>=c){
        cout << b+c << endl;
        return 0;
    }
    if(a>=c-b){
        cout << b+c << endl;
        return 0;
    }
    cout << 2*b+a+1 << endl;
    return 0;
}