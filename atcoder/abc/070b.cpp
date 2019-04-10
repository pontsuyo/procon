#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max(0, min(b, d) - max(a, c)) << endl;
    return 0;
}