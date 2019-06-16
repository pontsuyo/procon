#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007

int main(){
    ll N, K;
    cin >> N >> K;
    ll a[N];
    rep(i, N){
        cin >> a[i];
    }
    vector<ll> S(N+1, 0);
    // S[0] = 0;
    for(int i=0; i<N;i++){
        S[i+1] = S[i] + a[i];
    }

    ll cnt = 0;
    rep(i, N){
        ll tmp = 0;
        ll it = S.end() - lower_bound(S.begin()+i, S.end(), K+S[i]);
        cnt += it;
    }   
    printf("%lld\n", cnt);
    return 0;
}