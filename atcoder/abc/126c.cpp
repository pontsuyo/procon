#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    double out=0;
    rep(i, n){
        if(i<k){
            out += pow((double)1/2, ceil(log2((double) k/(i+1))));
        }else{
            out += 1;
        }
    }
    printf("%.18lf\n",out/n);
    return 0;
}