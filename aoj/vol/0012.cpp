#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    double x[3], y[3];
    double xp, yp;
    while(cin >> x[0]){
        cin >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> xp >> yp;
        bool flag = true;
        rep(i, 3){
            rep(j, 3){
                if(i<j){
                    int k = 3-i-j;
                    double _1 = (x[j]-x[i])*y[k] - (y[j]-y[i])*(x[k]-x[i]) - y[i];
                    double _p = (x[j]-x[i])*yp   - (y[j]-y[i])*(xp  -x[i]) - y[i];
                    if(_1*_p<0){
                        flag = false;
                    }
                }
            }
        }
        if(flag){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    // printf("%d\n", N);
    return 0;
}