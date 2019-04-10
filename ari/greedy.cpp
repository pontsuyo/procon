#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    const int V[6] = {1,5,10,50,100,500};

    int C[6];
    for(int i=0; i<6;i++){
        cin >> C[i];
    }
    int A;
    cin >> A;
    
    int ans=0;
    for(int i=5;i>=0;i--){
        int t = min(A/V[i], C[i]);
        A -= t*V[i];
        ans += t;
    }
    printf("%d\n", ans);
    return 0;
}

