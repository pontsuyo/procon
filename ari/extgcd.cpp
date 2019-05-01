#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int x, y;

int extgcd(int a, int b, int& x, int& y){
    int d = a;
    if (b!=0){
        d = extgcd(b, a%b, y, x);
        y -= (a/b) * x;
    }else{
        x = 1;
        y=0;
    }
    return d;
}


int main(){
    int A, B;
    cin >> A >> B;
    extgcd(A, B, x,y);
    cout << x << " " << y << endl;
    return 0;
}