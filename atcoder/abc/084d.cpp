#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9
#define MAX_N 100005

int prime[MAX_N];
bool is_prime[MAX_N+1];

int sieve(int n){
    int p=0;
    for(int i=0;i<=n;i++){
        is_prime[i] = true;
    }
    is_prime[0] = false;
    is_prime[1] = false;
    for(int i=2;i<=n;i++){
        if(is_prime[i]){
            prime[p++] = i;
            for(int j=2*i; j <= n; j+=i){
                is_prime[j] = false;
            }
        }
    }
    return p;
}

int sum[100003];
bool ans[100006];

int main(){
    sieve(100005);
    
    for (int i = 1; i <= 100004; i+=2){
        ans[i] = is_prime[i] && is_prime[(i+1)/2];
    }
    rep(i, 100002){
        if(i%2==0) continue;
        if(ans[i]){
            sum[i+2] = sum[i] + 1;
        }else{
            sum[i+2] = sum[i];
        }
    }

    int q;
    cin >> q;
    rep(i, q){
        int l, r; cin >> l >> r;
        // printf("%d %d\n",sum[l], sum[r]);
        cout << sum[r+2] - sum[l] << endl;
    } 
    return 0;
}