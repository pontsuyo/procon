#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n;
    cin >> n;
    int a[n];
    int tmp;
    rep(i, n){
        cin >> a[i];
        if(i==0){
            tmp = a[0];
        }

        tmp = __gcd(tmp, a[i]);

    }
    cout << tmp << endl;
    return 0;
}