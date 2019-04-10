#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int c[1000][1000] = {0};

    int n; cin >> n;
    int w[n];
    rep(i, n){
        cin >> w[i];
    }

    // for(int i=0; i<n-1;i++){
    //     c[i][i+1] = w[i]+w[i+1];
    // }

    for(int i=n-2; i>=0; i--){
        for(int j=i+1; j<n; j++){
            int wsum = 0;
            int MIN = 1000000000;
            for(int k=i;k<j;k++){
                
                MIN = min(MIN, c[i][k]+c[k+1][j]);
                wsum += w[k];
            }
            c[i][j] = MIN + wsum + w[j];
            // printf("%d, %d, %d\n", i, j, c[i][j]);
        }
    }
    printf("%d\n", c[0][n-1]);
    return 0;
}