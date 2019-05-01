#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n;
    cin >> n;
    int h[n];
    rep(i, n){
        cin >> h[i];
    }
    int MAX = -1;
    int cnt = 0;
    rep(i, n){
        if(MAX<=h[i]){
            cnt++;
        }
        MAX = max(MAX, h[i]);
    }

    cout << cnt << endl;
    return 0;
}