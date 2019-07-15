#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    ll n, k;
    cin >> n >> k;

    ll cnt = 0;
    if(k!=0){
        for(ll b=k+1;b<=n;b++){
            cnt += (n/b)*(b-k) + max(n%b-k+1, 0LL);
        }
    }else{
        cnt = n*n;
    }
    cout << cnt << endl;
    // printf("%d\n", N);
    return 0;
}