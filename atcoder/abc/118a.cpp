#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int a, b;
    cin >> a >> b;
    if(b%a==0){
        cout << a+b << endl;
    }else{
        cout << b-a << endl;
    }
    return 0;
}