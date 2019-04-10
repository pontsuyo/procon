#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(ll i=0;i<n;i++)

int main(){
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    int c;
    rep(i, a+b+1){
        if(i==a){
            if(s[i]!='-'){
                cout << "No" << endl;
                return 0;
            }
        }else{
            c = (int)(s[i] - '0');
            if(c<0 || c>9){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}