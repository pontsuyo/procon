#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    rep(i, n){
        if(i!=(k-1)){
            cout << s[i];
        }else{
            cout << (char)(s[i]-'A'+'a');
        }
    }
    cout << endl;
    return 0;
}