#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    string s;
    cin >> s;
    int MAX = 0;
    rep(i, s.size()){
        for(int j=i;j<s.size();j++){
            string tmp = s.substr(i,j-i+1);
            bool flag = true;
            rep(k,tmp.size()){
                if(!(tmp[k]=='A' || tmp[k]=='C' || tmp[k]=='G' || tmp[k]=='T')){
                    flag = false;
                    break;
                }
            }
            if(flag){
                // cout << tmp << endl;
                MAX = max(MAX, (int)tmp.size());
            }
        }
    }
    printf("%d\n", MAX);
    return 0;
}