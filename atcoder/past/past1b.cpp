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
    int n;
    cin >> n;
    int a[n];
    rep(i, n){
        cin >> a[i];
    }
    rep(i, n-1){
        int tmp = a[i+1] - a[i];
        if(tmp>0){
            printf("up %d\n", tmp);
        }else if(tmp<0){
            printf("down %d\n", -tmp);
        }else{
            printf("stay\n");
        }
    }
    return 0;
}