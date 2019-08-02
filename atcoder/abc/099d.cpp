#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int n, C;
    cin >> n >> C;

    int d[C][C];
    rep(i, C){
        rep(j, C){
            cin >> d[i][j];
        }
    }

    int c[3][30] = {};
    rep(i, n){
        rep(j, n){
            int tmp;
            cin >> tmp;
            c[(i+j)%3][tmp-1]++;
        }
    }

    int ans = 2002002002;
    rep(i, C){
        rep(j, C){
            if(i!=j){
                rep(k, C){
                    if(i!=k && j!=k){
                        int cnt = 0;
                        rep(l, C){
                            cnt += d[l][i]*c[0][l];
                        }
                        rep(l, C){
                            cnt += d[l][j]*c[1][l];
                        }
                        rep(l, C){
                            cnt += d[l][k]*c[2][l];
                        }

                        ans = min(ans, cnt);
                    }
                }
            }
        }
    }
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}