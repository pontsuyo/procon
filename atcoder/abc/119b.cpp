#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n;
    cin >> n;
    float x;
    string u;
    float sum = 0;
    rep(i, n){
        cin >> x >> u;
        if(u=="JPY"){
            sum += x;
        }else{
            sum += x*380000.0;
        }
    }

    cout << sum << endl;
    return 0;
}