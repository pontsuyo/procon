#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int H, W;
    cin >> H >> W;
    char a[H][W];
    rep(i, H){
        rep(j, W){
            cin >> a[i][j];
        }
    }

    char b[H+2][W+2] = {'#'};
    rep(i, H+2){
        rep(j, W+2){
            b[i][j] = '#';
        }
    }
    rep(i, H+2){
        rep(j, W+2){
            if(i>0 && i<H+1 && j>0 && j<W+1){
                b[i][j] = a[i-1][j-1];
            }
        }
    }

    rep(i, H+2){
        rep(j, W+2){
            cout << b[i][j];
        }
        cout << endl;
    }
    return 0;
}