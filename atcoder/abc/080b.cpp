#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n, m;
    cin >> n;
    m=n;
    int f=0;
    rep(i, 10){
        f += (n%10);
        n /= 10;
    }

    if(m%f==0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
    return 0;
}