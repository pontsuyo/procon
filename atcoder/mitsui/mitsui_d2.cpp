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
    string s;
    cin >> n >> s;

    int ans = 0;
    for (int i = 0; i < 1000; i++){
        int d1 = i/100;
        int d2 = (i/10)%10;
        int d3 = i%10;
        
        bool f1=false, f2=false;
        rep(i, n){
            if(!f1 && (s[i]-'0')==d1){
                f1=true;
                continue;
            }
            if(!f2 && f1 && (s[i]-'0')==d2){
                f2=true;
                continue;
            }
            if(f2 && (s[i]-'0')==d3){
                ans++;
                // printf("%d\n", i);
                break;
            }
        }
    }
    

    // cout << ans << endl;
    printf("%d\n", ans);
    return 0;
}