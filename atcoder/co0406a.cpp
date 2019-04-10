#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n;
    cin >> n;
    int MAX = 0;
    int a[n];
    rep(i, n){
        cin >> a[i]; 
        rep(j, i-MAX){
            if(a[j]!=a[i]){
                MAX = max(MAX, i-j);
                break;
            }
        }
    }
    cout << MAX << endl;
    return 0;
}