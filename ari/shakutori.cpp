#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define MAX_N (int)1e5

int n, S;
int a[MAX_N];
int sum[MAX_N + 1];

// void solve(){
//     rep(i, n){
//         sum[i+1] = sum[i] + a[i];
//     }

//     if(sum[n]<S){
//         printf("0\n");
//         return;
//     }

//     int res = n;
//     for(int s=0; sum[s] + S <= sum[n];s++){
//         int t = lower_bound(sum+s, sum+n, sum[s]+S) - sum;
//         res = min(res, t-s);
//     }
//     printf("%d\n", res);
// }

void solve(){
    int res = n+1;
    int s=0, t=0, sum=0;
    for(;;){
        while(t<n && sum<S){
            sum += a[t++];
        }
        if(sum<S) break;
        res = min(res, t-s);
        sum -= a[s++];
    }

    if(res>n){
        res=0;
    }
    printf("%d\n", res);
}

int main(){
    cin >> n >> S;
    rep(i, n){
        cin >> a[i];
    }
    solve();
    return 0;
}