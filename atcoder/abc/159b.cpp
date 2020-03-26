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
    int n = s.size();

    rep(i, n){
        if(s[i]!=s[n-1-i]){
            cout << "No" << endl;        
            return 0;
        }
    }

    rep(i, (n-1)/2){
        if(s[i]!=s[(n-3)/2-i]){
            cout << "No" << endl;        
            return 0;
        }
    }

    rep(i, (n-1)/2){
        if(s[i+(n+1)/2]!=s[n-1-i]){
            cout << "No" << endl;        
            return 0;
        }
    }

    cout << "Yes" << endl;
    // printf("%d\n", N);
    return 0;
}