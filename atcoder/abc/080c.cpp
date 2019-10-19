#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n;
    cin >> n;
    int f[n][10];
    rep(i, n){
        rep(j, 10){
            cin >> f[i][j];
        }
    }

    int p[n][11];
    rep(i, n){
        rep(j, 11){
            cin >> p[i][j];
        }
    }

    int MAX = -INF;
    for (int i = 1; i<1 << 10; i++){
        int ff[10];
        int ii = i;
        rep(j, 10){
            ff[j] = ii%2;
            ii /=2;
        }

        int sum = 0;
        rep(j, n){
            int s = 0;
            rep(k, 10){
                if(ff[k]==1 && f[j][k]==1) s++;
            }
            sum += p[j][s];
        }
        MAX = max(MAX, sum);
    }
    

    cout << MAX << endl;
    // printf("%d\n", N);
    return 0;
}