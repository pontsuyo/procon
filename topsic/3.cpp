#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int r, c;
    cin >> r >> c;

    string s[r];
    rep(i, r){
        cin >> s[i];
    }

    int si=INF, sj=INF, gi=INF, gj=INF;
    rep(i, r){
        rep(j, c){
            if(s[i][j]=='*'){
                si = i;
                sj = j;
                break;
            }
        }
        if(si!=INF) break;
    }

    for(int i=r-1;i>=0;i--){
        for(int j=c-1;j>=0;j--){
            if(s[i][j]=='*'){
                gi = i;
                gj = j;
                break;
            }
        }
        if(gi!=INF) break;
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(i>=si && i <= gi && j >= sj && j <= gj){
                if(s[i][j]!='*'){
                    cout << "NO" << endl;
                    return 0;
                }
            }else{
                if(s[i][j]=='*'){
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}