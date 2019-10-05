#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    string s;
    cin >> s;

    rep(i, s.size()){
        if(i%2==0){
            if(!(s[i]=='R'||s[i]=='U'||s[i]=='D')){
                cout << "No" << endl;
                return 0;
            }
        }else{
            if(!(s[i]=='L'||s[i]=='U'||s[i]=='D')){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    // printf("%d\n", N);
    return 0;
}