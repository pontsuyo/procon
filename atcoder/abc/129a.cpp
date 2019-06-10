#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int p ,q, r;
    cin >> p >> q >> r;
    cout << min(p+q, min(q+r, r+p)) << endl;
    return 0;
}