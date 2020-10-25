#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (1e9+7)
#define INF (int) 1e9
#define LLINF (ll) 1e18
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

int main(){
    sieve(10000);
    int t;
    cin >>t;
    rep(ti, t){
        int n; cin >> n;
        if(is_prime[n]){
            rep(i, n){
                rep(j, n){
                    if(j!=n-1){
                        printf("1 ");
                    }else{
                        printf("1\n");
                    }
                }
            }
        }else{
            int tmp = n;
            while(!is_prime[tmp] || is_prime[tmp-n+1]){
                tmp++;
            }
            rep(i, n){
                rep(j, n){
                    if(i==j){
                        printf("%d", tmp-n+1);
                    }else{
                        printf("1");
                    }

                    if(j!=n-1){
                        printf(" ");
                    }else{
                        printf("\n");
                    }
                }
            }
        }
    }
    // printf("%d\n", N);
    return 0;
}