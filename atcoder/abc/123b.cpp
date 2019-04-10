#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int a[5], b[5];
    int MIN=10;
    int sum = 0;
    rep(i,5){
        cin >> a[i];
        if(a[i]%10==0){
            b[i] = 10;
        }else{
            b[i] = a[i]%10;
        }
        sum += a[i] -b[i] + 10;
        MIN = min(MIN, b[i]);
    }

    sum += MIN - 10;
    cout << sum << endl;
    return 0;
}