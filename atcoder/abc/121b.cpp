#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n, m, c;
    cin >> n >> m >> c;
    int b[m];
    rep(i, m){
        cin >> b[i];
    }
    int a;
    int cnt = 0;
    rep(i, n){
        int sum = 0;
        rep(j, m){
            cin >> a;
            sum += a*b[j];
        }
        sum += c;
        if(sum>0){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}