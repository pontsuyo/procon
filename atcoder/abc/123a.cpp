#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int a[5];
    rep(i,5){
        cin >> a[i];
    }
    int k; cin >> k;
    rep(i,5){
        for(int j=i+1;j<5;j++){
            if(a[j]-a[i]>k){
                cout << ":(" << endl;
                return 0;
            }
        }
    }
    cout << "Yay!" << endl;
    return 0;   
}