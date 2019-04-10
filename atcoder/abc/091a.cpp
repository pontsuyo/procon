#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    char c;
    rep(i, 9){
        cin >> c;
        if(i%4==0) cout << c;
    }
    cout << endl;
    return 0;
}