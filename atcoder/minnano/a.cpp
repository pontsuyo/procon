#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n, k;
    cin >> n>> k;
    if(2*k-1 <= n) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}