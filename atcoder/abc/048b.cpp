#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    ll a, b, x;
    cin >> a >> b >> x;
    if(a==0){
        cout << b/x +1 << endl;
    }else{
        cout << b/x-(a-1)/x << endl;
    }
    return 0;
}