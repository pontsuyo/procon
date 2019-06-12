#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007

int dp[100005][2];

int main(){
    // string L;
    // cin >> L;

    // int cnt= 0;
    // int l = L.size();
    // rep(i, L.size()){
    //     if(L[i]=='1'){
    //         cnt += (ll)pow(3, l-i-1) *2 % MOD;
    //         cnt = cnt % MOD;
    //     }
    // }
    // printf("%d\n", cnt);
    // return 0;

    string s;
    cin >> s;
    int n = s.size();
    dp[0][0] = 1;
    rep(i, n){
        if(s[i] == '0') {
            dp[i+1][0] = dp[i][0];
            dp[i+1][0] = dp[i][1];
        }
    }
}