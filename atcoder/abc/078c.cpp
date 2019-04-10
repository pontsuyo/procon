#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n, m;
    cin >> n >> m;
    cout << (1900*m + 100*(n-m))*pow(2,m) << endl;
    return 0;
}