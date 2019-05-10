#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define MAX_N (int)1e4
#define INF (int)1e6

int n;
int k;
int w[MAX_N], v[MAX_N];

double y[MAX_N];

bool C(double x){
    rep(i, n){
        y[i] = v[i] - x * w[i];
    }
    sort(y, y+n);

    double sum = 0;
    rep(i, k){
        sum += y[n-i-1];
    }
    return sum >= 0;
}


void solve(){
    double lb = 0, ub = INF;
    rep(i, 100){
        double mid = (lb+ub)/2;
        if (C(mid)) lb = mid;
        else ub = mid;
    }
    printf("%.2f\n", ub);
}


int main(){
    cin >> n >> k;
    rep(i, n){
        cin >> w[i] >> v[i];
    }
    solve();
    return 0;
}