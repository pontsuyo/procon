#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007

int main(){
    double W, H, x, y;
    cin >> W >> H >> x >> y;
    if(x==W/2 && y == H/2){
        printf("%lf %d\n", W*H/2, 1);
    }else{
        printf("%lf %d\n", W*H/2, 0);
    }
    return 0;
}