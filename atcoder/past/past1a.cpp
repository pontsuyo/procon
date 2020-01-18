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
    string s;
    cin >> s;
    int n = 0;
    rep(i, 3){
        if(s[i]>='0' && s[i]<='9'){
            n += (s[i]-'0')*pow(10, 2-i);
        }else{
            cout << "error" << endl;
            return 0;
        }
    }
    cout << n*2 << endl;
    return 0;
}