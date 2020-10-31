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
    // string s;
    // while(cin >> s){
    //     rep(i, s.size()){
    //         if(s[i]!='.' && s[i]!=' '){
    //             cout << (char)(s[i]-32);
    //             // printf("%c", s[i]-26);
    //         }else{
    //             printf("%c", s[i]);
    //         }
    //     }

    // }

    string s;
    
    while(cin >> s){
        rep(i, s.size()){
            if(s[i]!='.' && s[i]!=' '){
                cout << (char)(s[i]-32);
                // printf("%c", s[i]-26);
            }else{
                printf("%c", s[i]);
            }
        }
        
    }



    cout << endl;
    // printf("%d\n", N);
    return 0;
}