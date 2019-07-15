#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    string s;
    cin >> s;
    int c0=0, c1=0;
    rep(i, s.size()){
        if(s[i]=='0'){
            c0++;
        }else{
            c1++;
        }
    }
    printf("%d\n", min(c0, c1)*2);
    return 0;
}