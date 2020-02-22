#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define LLINF (ll) 2e18

int main(){
    string n;
    ll k;
    cin >> n >> k;

    ll keta = n.size();
    ll ans = 0;

    ll table[105][5];
    rep(i, 102){
        table[i][1] = 9;
        table[i][2] = 81*i;
        table[i][3] = 729 * i * (i-1)/2;
    }
    for (int i = 0; i < 103 ; i++){
        table[i+1][1] += table[i][1];
        table[i+1][2] += table[i][2];
        table[i+1][3] += table[i][3];
    }
    

    for (int i = 1; i <= keta; i++)
    {    
        ll num = n[i-1]-'0';
        if(keta-i-1>=0){
            if(num>=0 && k-i+1>=1){
                ans += table[keta-i-1][k-i+1];
            }
            if(num>=1 && k-i>=1 ){
                ans += (num-1) * table[keta-i-1][k-i];
            }
        }else if(keta-i==0 && k==keta){
            ans += num;
        }
        // if(i==k) ans++;
        // printf("%d %d\n", i, ans);
    }


    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}