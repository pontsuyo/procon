#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int X, A, B;
    cin >> X >> A >> B;
    if(A>=B){
        cout << "delicious" << endl;
    }else if(B <= A+X){
        cout << "safe" << endl;
    }else{
        cout << "dangerous" << endl;
    }
    return 0;
}