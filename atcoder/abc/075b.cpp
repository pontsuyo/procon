#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){    
    int h, w;
    cin >> h >> w;
    vector <string> s(h);

    rep(i, h){
        cin >> s[i];
    }

    int di[8] = {-1, 0, 1, -1, 1, -1,  0,  1};
    int dj[8] = {-1,-1,-1,  0, 0,  1,  1,  1};
    rep(i, h){
        rep(j, w){
            if(s[i][j]=='.'){
                
                s[i][j] = '0';
                rep(n, 8){
                    int ii=i + di[n];
                    int jj=j + dj[n];
                    if(ii>=0 && ii<h && jj>=0 && jj<w){
                        if( s[ii][jj]=='#'){
                            ++s[i][j];
                        }
                    }

                    // if(i==2) cout << n;
                }
            }else{
                // cout << '#';
            }
        }
        // cout << endl;
    }

    rep(i, h){
        rep(j, w){
            cout << s[i][j];
        }
        cout << endl;
    }
    return 0;
}