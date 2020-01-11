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
    int a[n], b[n];
    rep(i, n){
        cin >> a[i] >> b[i];
    }

    vector<int> ds;
    // ds.emplace_back(1);
    for (int i = 2; i *i <= a[0]; i++) {
        if(a[0]%i==0){
            ds.emplace_back(i);
            ds.emplace_back(a[0]/i);
        }
    }
    for (int i = 2; i * i<= b[0]; i++) {
        if(b[0]%i==0){
            ds.emplace_back(i);
            ds.emplace_back(b[0]/i);
        }
    }
    
    sort(ds.begin(), ds.end());

    int ans = 1;
    for(auto d: ds){
        bool flag = true;
        rep(i, n-1){
            if(a[i+1]%d!=0 && b[i+1]%d!=0){
                flag = false;
                break;
            }
        }
        if(flag){
            // ans = d;
            chmax(ans, d);
        }
    }
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}