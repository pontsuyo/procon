#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int N, M;
    cin >> N >> M;
    int L[M], R[M];
    rep(i, M){
        cin >> L[i] >> R[i];
    }

    int L_max = 1, R_min = N;
    rep(i, M){
        L_max = max(L_max, L[i]);
        R_min = min(R_min, R[i]);
    }
    // printf("%d\n", R_min - L_max+1);
    printf("%d\n", max(R_min - L_max+1, 0));
    return 0;
}