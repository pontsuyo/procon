#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int a, b;
    cin >> a >> b;
    int sum=0;
    if(a!=b){
        cout << max(a,b)*2-1 << endl;
    }else{
        cout << 2*a << endl;
    }
    return 0;
}