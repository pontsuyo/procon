#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    string s;
    cin >> s;
    vector<char> c(4);
    rep(i, 4){
        c[i] = s[i];
    }
    sort(c.begin(), c.end());
    // rep(i, 4){
    //     cout << c[i] << endl;
    // }
    if(c[0]==c[1] && c[1]!=c[2] && c[2]==c[3]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}