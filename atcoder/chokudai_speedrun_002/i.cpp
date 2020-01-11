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
    int ans;
    int aa, bb;
    // bool flag = false;
    int cnt = 0;
    rep(i, n){
        int a, b;
        cin >> a >> b;
        if(i==0){
            aa = a;
            bb = b;
            ans = 1;
        }else{
            if(ceil((double)aa/b) < ceil((double)a/bb)){
                aa = a;
                bb = b;
                ans = i+1;
                // flag = true;
                // printf("ok\n");
            }else if(ceil((double)aa/b) == ceil((double)a/bb)){
                cnt++;
            }
        }
    }
    // if(!flag){
    if(cnt==n-1){
        cout << -1 << endl;
        return 0;
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}