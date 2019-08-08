#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    ll x;
    cin >> x;
    ll cnt = x/11;
    x -= cnt*11;
    cnt *= 2;
    if(x>6){
        cnt += 2;
    }else if(x>0){
        cnt += 1;
    }
    cout << cnt << endl;
    // printf("%d\n", N);
    return 0;
}