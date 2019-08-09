#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    string s;
    cin >> s;
    int len = s.size();
    while(len>0){
        // cout << len << endl;
        if(len>=5 && s.substr(len-5,5)=="dream"){
            len -= 5;
        }else if(len>=7 && s.substr(len-7,7)=="dreamer"){
            len -= 7;
        }else if(len>=5 && s.substr(len-5,5)=="erase"){
            len -= 5;
        }else if(len>=6 && s.substr(len-6,6)=="eraser"){
            len -= 6;
        }else{
            cout << "NO" << endl;
            return 0;
        }        
    }
    cout << "YES" << endl;
    return 0;
}