#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n, k;
    cin >> n >> k;
    cout << 3*n + min(k-1, n-k) << endl;
    return 0;
}