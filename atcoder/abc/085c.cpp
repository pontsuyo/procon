#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int n, y;
    cin >> n >> y;

    rep(i, 2001){
        rep(j, 2001){
            int tmp = y - i*10000 -j*5000;
            if(tmp>=0){
                int k = tmp/1000;
                if(i+j+k==n){
                    printf("%d %d %d\n", i, j, k);
                    return 0;
                }
            }
        }
    }
    printf("%d %d %d\n", -1, -1, -1);
    return 0;
}