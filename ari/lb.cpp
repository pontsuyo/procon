#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

#define  MAX_N 100000

int n, k;
int a[MAX_N];

void solve(){
    int lb = -1, ub = n;

    while(ub-lb>1){
        int mid = (lb+ub)/2;
        if(a[mid] >= k){
            ub = mid;
        }else{
            lb = mid;
        }
    }

    printf("%d\n", ub);
}



int main(){
    cin >> n >> k;
    rep(i, n){
        cin >> a[i];
    }
    solve();
    return 0;
}