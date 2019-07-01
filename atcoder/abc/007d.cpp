#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

ll nums(int dig){
    if(dig<=3){
        return dig;
    }else if(dig<=8){
        return dig-1;
    }else{
        return dig-2;
    }
}

ll cnt(ll n){
    vector<int> d(20);
    rep(i, 20){
        d[i] = n % 10;
        n /= 10;
    }
    ll dp[20][2] = {};
    dp[0][0] = 1;
    dp[0][1] = 0;
    
    rep(i, 19){
        dp[i+1][0] = dp[i][0];
        dp[i+1][1] = dp[i][1] * 8 + dp[i][0] * nums(d[18-i]);
    }
    
    return dp[19][1];
}


int main(){
    ll A, B;
    cin >> A >> B;
    cout << cnt(B) - cnt(A-1) << endl;
    return 0;
}