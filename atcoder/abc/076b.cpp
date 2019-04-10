#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n, k;
    cin >> n >> k;
    int MIN = 1;
    rep(i, n){
        MIN = min(MIN*2, MIN+k);
    }
    cout << MIN << endl;
    return 0;
}