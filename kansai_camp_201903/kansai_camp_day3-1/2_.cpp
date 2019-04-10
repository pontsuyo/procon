#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int c[3001][3001] = {0};

    int n; cin >> n;
    int w[n];
    rep(i, n){
        cin >> w[i];
    }


    for(int d=1; d<n; d++){
        for(int l=0;l<n-1; l++){
            
            // printf("%d, %d, %d\n", i, j, c[i][j]);
        }
    }
    printf("%d\n", c[0][n-1]);
    return 0;
}