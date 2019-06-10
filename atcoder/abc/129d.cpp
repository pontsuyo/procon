#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int H, W;
    cin >> H >> W;
    int a[H][W];
    string tmp;
    rep(i, H){
        cin >> tmp;
        rep(j, W){
            if(tmp[j]=='#'){
                a[i][j] = 0;
            }else{
                a[i][j] = 1;
            }
        }
    }

    int h[H][W];
    int v[H][W];

    rep(i, H){
        rep(j, W){
            if(a[i][j]==0){
                h[i][j] = 0;
            }else{
                if(j==0){
                    h[i][j] = 1;
                }else if(a[i][j-1]==0){
                    h[i][j] = 1;
                }else{
                    h[i][j] = h[i][j-1] + 1;
                }
            }
        }
    }

    rep(i, H){
        rep(j, W){
            if(a[i][j]==0){
                v[i][j] = 0;
            }else{
                if(i==0){
                    v[i][j] = 1;
                }else if(a[i-1][j]==0){
                    v[i][j] = 1;
                }else{
                    v[i][j] = v[i-1][j] + 1;
                }
            }
        }
    }

    rep(i, H){
        for(int j=W-1;j>=0;j--){
            if(j<W-1 && a[i][j]==1 && a[i][j+1]==1){
                h[i][j] = h[i][j+1];
            }
        }
    }

    rep(j, W){
        for(int i=H-1;i>=0;i--){
            if(i<H-1 && a[i][j]==1 && a[i+1][j]==1){
                v[i][j] = v[i+1][j];
            }
        }
    }

    int MAX = 0;
    rep(i, H){
        rep(j, W){
            int ans = h[i][j] + v[i][j] -1;
            MAX = max(MAX, ans);
        }
    }

    // rep(i, H){
    //     rep(j, W){
    //             cout << v[i][j];
    //     }
    //     cout << endl;
    // }

    cout << MAX << endl;
    return 0;
}