#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define MAX_N 100000000

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

int main(){
    int n;
    cin >> n; 
    cout << sieve(n) << endl;
    return 0;
}