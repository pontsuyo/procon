#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n, m;
    cin >> n >> m;
    
    int k[n];
    // int a[n][m] = {0};
    int a[n][m];
    bool ans[m] = {1};
    int tmp;

    rep(i, n){
        rep(j, m){
            a[i][j] = 0;
        }
    }

    rep(i, n){
        cin >> k[i];
        rep(j, k[i]){
            cin >> tmp;
            a[i][tmp-1] = 1;
        }
    }

    int sum = 0;
    int cnt=0;

    rep(j, m){
        sum = 0;
        rep(i, n){
            sum += a[i][j];
        }
        if(sum==n){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}