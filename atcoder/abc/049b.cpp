#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int H, W;
    cin >> H >> W;
    char C[H][W];
    rep(i, H){
        rep(j, W){
            cin >> C[i][j];
        }
    }
    rep(i, 2*H){
        rep(j, W){
            cout << C[i/2][j];
        }
        cout << endl;
    }
    return 0;
}