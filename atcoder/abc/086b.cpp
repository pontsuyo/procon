#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

int main(){
    string a, b;
    cin >> a >> b;
    a += b;
    rep(i, 330){
        if(stoi(a) == i*i){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}