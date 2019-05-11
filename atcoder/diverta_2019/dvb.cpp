#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int R, G, B, N;
    cin >> R >> G >> B >> N;
    int nr = N/R, ng = N/G, nb = N/B;

    int cnt = 0;
    rep(i, N/R+1){
        rep(j, N/G+1){
            int tmp = N-i*R-j*G;
            if(tmp%B==0 && tmp>=0){
                cnt++;
                // cout << i << j << endl;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}