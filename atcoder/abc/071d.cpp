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
    string s1, s2;
    cin >> s1 >> s2;

    int i=1;
    ll ans;

    if(s1[0]==s2[0]){
        ans = 3;
    }else{
        ans = 6;
    }

    while(i<n){
        if(s1[i]==s2[i]){
            if(s1[i-1]==s2[i-1]){
                ans *= 2;
                ans %=MOD;
            }
        }else{
            if(s1[i-1]==s2[i-1]){
                ans *= 2;
                ans %=MOD;
            }else{
                if(s1[i]!=s1[i-1]){
                    ans *= 3;
                    ans %=MOD;
                }
            }
        }
        i++;
    }

    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}