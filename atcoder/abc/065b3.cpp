#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int N;
    cin >> N;
    int a[N];
    rep(i, N){
        cin >> a[i];
    }
    int n=a[0];
    if(n==2){
        cout << 1 << endl;
        return 0;
    }
    rep(i, N){
        n = a[n-1];
        if(n==2){
            cout << i+2 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
