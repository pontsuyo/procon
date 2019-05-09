#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

#define MAX_N (int)1e5+1
#define INF (int)1e9+1

int N, M;
int x[MAX_N];

bool C (int d){
    int last = 0;
    rep(i, M){
        int crt = last + 1;
        while(crt < N && x[crt] - x[last] < d){
            crt++;
        }
        if (crt == N) return false;
        last = crt;
    }
    return true;
}

void solve(){
    sort(x, x+N);
    int lb = 0, ub = INF;
    while (ub - lb > 1){
        int mid = (lb + ub)/2;
        if (C(mid)) lb = mid;
        else ub = mid;
    }
    printf("%d\n", lb);
}

int main(){
    cin >> N >> M;
    rep(i, N){
        cin >> x[i];
    }
    solve();
    return 0;
}