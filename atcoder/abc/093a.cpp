#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    string s;
    cin >> s;
    if(s=="abc" || s=="acb" || s=="bac" || s=="bca" || s=="cab" || s=="cba"){
        cout <<"Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}