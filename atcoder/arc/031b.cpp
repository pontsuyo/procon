#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

bool os[10][10];
string a[10], b[10];

void dfs(int i, int j){
    os[i][j] = true;
    if(a[i][j]=='o'){
        if(1<=i && !os[i-1][j]) dfs(i-1, j);
        if(i<=8 && !os[i+1][j]) dfs(i+1, j);
        if(1<=j && !os[i][j-1]) dfs(i, j-1);
        if(j<=8 && !os[i][j+1]) dfs(i, j+1);
    }
}

int main(){
    rep(i, 10){
        cin >> b[i];
    }
    rep(k, 10){
        rep(l, 10){
            rep(i, 10){
                a[i] = b[i];
                rep(j, 10){
                    os[i][j] = false;
                }
            }
            int cnt = 0;
            
            a[k][l] = 'o';
            rep(i, 10){
                rep(j, 10){
                    if(os[i][j]==false && a[i][j]=='o'){
                        dfs(i, j);
                        cnt++;
                    }
                }
            }
            // printf("%d %d %d\n", k, l, cnt);
            if(cnt==1){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}