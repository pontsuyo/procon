#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    string s;
    cin >> s;
    int n;
    n = s.size();

    int cnt1 = 0;
    int cnt2 = 0;
    rep(i, n){
        if(i%2==0 && s[i]=='1' || i%2==1 && s[i]=='0'){
            cnt1++;
        }
    }
    rep(i, n){
        if(i%2==0 && s[i]=='0' || i%2==1 && s[i]=='1'){
            cnt2++;
        }
    }
    cout << min(n-cnt1, n-cnt2) << endl;
    return 0;
}