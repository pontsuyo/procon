#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n, m;
    cin >> n >> m;
    int x[m];
    rep(i, m){
        cin >> x[i];
    }

    if(n>=m){
        cout << 0 << endl;
        return 0;
    }

    sort(x, x+m);
    int d = x[m-1] - x[0];

    if(n==1){
        cout << d << endl;
    }else{
        int dx[m-1];
        rep(i, m-1){
            dx[i] = x[i+1] - x[i];
        }
        sort(dx, dx+m-1);
        
        rep(i, n-1){
            d -= dx[m-2-i];
        }
        cout << d << endl;

    }

    return 0;
}