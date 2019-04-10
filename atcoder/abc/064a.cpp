#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int r, g, b;
    cin >> r >> g >> b;
    if((10*g+b)%4==0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}