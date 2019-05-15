#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int t;
    cin >> t;
    rep(j, t){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool f = false;
        rep(i, s.size()){
            if(s[i]=='8' && (n-i)>=11){
                f = true;
                break;
            }
        }
        if(f){
            printf("YES\n");
        }else{
            printf("NO\n", n);
        }
    }
    return 0;
}