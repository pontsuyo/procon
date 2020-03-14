#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

int main(){
    ll h, w;
    cin >> h >> w;
    if(h==1 || w==1){
        cout << 1 << endl;
    }else if(h%2==1 && w%2==1){
        cout <<  h*w/2+1 << endl;
    }else{
        cout <<  h*w/2 << endl;
    }
    // printf("%d\n", N);
    return 0;
}