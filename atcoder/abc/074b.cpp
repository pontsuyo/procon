#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n, k;
    cin >> n>> k;
    int x;
    int sum = 0;

    rep(i, n){
        cin >> x;
        sum += min(x, k-x) * 2;

    }
    cout << sum << endl;
    return 0;
}