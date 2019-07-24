#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    string s;
    cin >> s;
    vector<char> c;
    rep(i, s.size()){
        if(s[i]=='0'){
            c.emplace_back('0');
        }else if(s[i]=='1'){
            c.emplace_back('1');
        }else{
            if(c.size()>0){
                c.erase(c.end()-1);
            }
        }

    }
    rep(i, c.size()){
        cout << c[i];
    }
    cout << endl;
    return 0;
}