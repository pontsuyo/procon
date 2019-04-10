#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int t[n], x[n], y[n];
    for(int i=0;i<n;i++){
        cin >> t[i] >> x[i] >> y[i];
        if(i!=0){
            t[i] -= t[i-1];
            x[i] -= x[i-1];
            y[i] -= y[i-1];
        }
    }
    for(int i=0;i<n;i++){
        if((x[i] + y[i] -t[i])%2 != 0 || (x[i] + y[i]) > t[i]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}