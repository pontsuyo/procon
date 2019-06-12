#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

#define MAX_N 5000

int N;
int dir[MAX_N];
int f[MAX_N];


int calc(int K){
    memset(f, 0, sizeof(f));
    int res = 0;
    int sum = 0;
    for(int i=0;i+K <= N; i++){
        if((dir[i] + sum) %2 != 0){
            res++;
            f[i] = 1;
        }
        sum += f[i];
        if(i - K + 1 >= 0){
            sum -= f[i-K+1];
        }
    }

    for (int i=N-K+1; i<N; i++){
        if((dir[i] + sum) %2 != 0){
            res++;
            return -1;
        }
        if(i - K + 1 >= 0){
            sum -= f[i-K+1];
        }
    }
    return res;
}


void solve(){
    int K = 1, M=N;
    for(int k=1; k<=N; k++){
        int m = calc(k);
        if(m >= 0 && M > m) {
            M = m;
            K = k;
        }
    }
    printf("%d %d\n", K, M);
}

int main(){
    cin >> N;
    string s;
    cin >> s;
    rep(i, N){
        if(s[i]=='F'){
            dir[i] = 0;
        }else{
            dir[i] = 1;
        }
    }
    solve();
    return 0;
}