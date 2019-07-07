#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int N, D;
    cin >> N >> D;
    int X[N][D];
    rep(i, N){
        rep(j, D){
            cin >> X[i][j]; 
        }
    }

    int cnt=0;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            int d = 0;
            rep(k, D){
                d += (X[i][k]-X[j][k])*(X[i][k]-X[j][k]);
            }
            
            for(int l = 1;l<=(int)sqrt(d);l++){
                if(d == l*l){
                    cnt++;
                }
            }
            // if(d - (int)d==0){
            //     cnt++;
            // }
        }
    }
    printf("%d\n", cnt);

    return 0;
}