#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    ll x, y, z;
    cin >> x >> y >> z;
    ll cnt = (x+y)/z;
    ll xx = x%z;
    ll yy = y%z;
    ll a = (xx+yy)-(xx+yy)%z;
    // cout << cnt << " " << max((ll)0, min(a-xx, a-yy)) << endl;

    // cout << cnt << " " << max((ll)0, min(z-xx, z-yy)) << endl;
    if(xx+yy<z){
        cout << cnt << " " << 0 << endl;
    }else{
        cout << cnt << " " << min(z-xx, z-yy) << endl;
    }

    // printf("%d\n", N);
    return 0;
}