#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << min(a, b) + min(c, d) << endl;
    return 0;
}