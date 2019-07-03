#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int N, D, X, Y;
    cin >> N >> D >> X >> Y;
    if(X%D!=0 || Y%D!=0){
        printf("%f\n", 0.);
        return 0;
    }
    X /= D;
    Y /= D;

    if(abs(X)+abs(Y)>N){
        printf("%f\n", 0.);
        return 0;
    }
    int w = 2*N+3;
    double p[w][w][N+1] = {0};
    p[N+1][N+1][0] = 1;
    int dx[4] = {0,1,0,-1};
    int dy[4] = {1,0,-1,0};

    rep(n, N+1){
        for(int x=1;x < w-1;x++){
            for(int y=1;y < w-1;y++){
                rep(i, 4){
                    int nx = x + dx[i];
                    int ny = y + dy[i];
                    p[nx][ny][n+1] += p[x][y][n]/4;
                }
            }
        }
        // cout << "n = " << n << endl;
        // rep(i, w){
        //     rep(j, w){
        //         cout << p[i][j][n+1] << " ";
        //     }
        //     cout << endl;
        // }
        // cout << p[0][0][n+1] << endl;
    }
    printf("%.20lf\n", p[X+N+1][Y+N+1][N]);
    return 0;
}