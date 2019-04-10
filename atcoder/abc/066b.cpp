#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    string s;
    cin >> s;

    int hl;
    for(int i=1;i<s.size(); i++){
        hl = s.size()/2-i;
        if(s.substr(0, hl)==s.substr(hl, hl)){
            cout << 2*hl << endl;
            return 0;
        }
    }
    return 0;
}