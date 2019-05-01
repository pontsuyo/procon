#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define MAX_L 1000000000000
#define MAX_SQRT_B 1000000

bool is_prime[MAX_L];
bool is_prime_small[MAX_SQRT_B];

void segment_sieve(ll a, ll b){
    for(int i=0; (ll)i*i<b;i++){
        is_prime_small[i] = true;
    }
    for(int i=0;i<b-a;i++){
        is_prime[i] = true;
    }

    for(int i=2; (ll)i*i<b; i++){
        if(is_prime_small[i]){
            // [2, sqrtb), の篩を作成
            for(int j=2*i; (ll)j*j<b; j+=i){
                is_prime_small[j] = false;
            }
            // [a, sqrtb), の篩を作成
            for(ll j=max(2LL, (a+i-1)/i)*i; j<b; j+=i){
                is_prime[j-a] = false;
            }
        }
    }
}

int main(){
    int a, b;
    cin >> a >>b; 
    segment_sieve(a, b);
    return 0;
}