#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

#define INF (int) 1e5
#define MAX_N (int) 1e4

int N, K;
double L[MAX_N];

bool C(double x){
    int num = 0;
    rep(i, N){
        num += (int)(L[i]/x);
    }
    return num >= K;
}

void solve(){
    double lb = 0, ub = INF;

    rep(i, 100){
        double mid = (lb+ub)/2;
        if(C(mid)) lb = mid;
        else ub = mid;
    }
    printf("%.2f\n", floor(ub*100)/100);
}

int main(){
    cin >> N >> K;
    rep(i, N){
        cin >> L[i];
    }
    solve();
    return 0;
}