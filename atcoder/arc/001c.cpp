#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

bool used[8];
bool ok[8];

int main(){
    string s[8];
    rep(i,8){
        cin >> s[i];
        rep(j, 8){
            if(s[i][j]=='Q'){
                used[j]=true;
                ok[i]=true;
            }
        }
    }

    rep(i, 8){
        if(ok[i]) continue;
        rep(j, 8){
            if(j!=i && j!=7-i && !used[j]){
                used[j]=true;
                s[i][j]='Q';
                // printf("%d %d\n", i, j);
                ok[i]=true;
                break;
            }
        }

        if(!ok[i]){
            cout << "No Answer" << endl;
            return 0;
        }
    }
    rep(i, 8){
        cout << s[i] << endl;
    }
    return 0;
}