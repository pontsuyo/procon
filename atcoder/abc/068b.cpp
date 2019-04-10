#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n; cin >> n;
    int i=0;
    for(i;i<10;i++){
        if(n<pow(2, i+1)){
            break;
        }
    }
    cout << pow(2, i) << endl;
    return 0;
}