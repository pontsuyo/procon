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
    rep(i, n){
        string s;
        cin >> s;
        int cnt = 1;
        rep(i, s.size()){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                cnt++;
            }
        }

        if(cnt<=7){
            cout << "YES" << endl;
            
        } else{
            cout << "NO" << endl;
        }
    }
    // printf("%d\n", N);
    return 0;
}