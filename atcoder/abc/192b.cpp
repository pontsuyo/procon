#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (1e9+7)
#define INF (int) 1e9
#define LLINF (ll) 1e18

int main(){
    string s;
    cin >> s;
    rep(i, s.size()){
        if(i%2==0){
            if(!islower(s[i])){
                cout << "No" << endl;
                return 0;
            }
        }else{
            if(!isupper(s[i])){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    // printf("%d\n", N);
    return 0;
}