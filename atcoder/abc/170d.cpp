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
#define MAX_N 1000005

int n;
vector<int> ida;
bool a[MAX_N];

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
        if(!a[i]) continue;
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
    int nn;
    cin >> nn; 
    map<int, int> m;
    int aa[nn];
    rep(i, nn){
        cin >> aa[i];
        m[aa[i]]++;
    }

    for (auto mi : m){
        ida.emplace_back(mi.first);
    }

    rep(i, ida.size()){
        a[ida[i]]=true;
    }
    
    sieve(MAX_N);
    
    int ans = 0;
    if(m[1]==0){
        
        rep(i, nn){
            if(is_prime[aa[i]]){
                if(m[aa[i]]==1){
                    // printf("add: %d\n", aa[i]);
                    ans++;
                }
            }
        }
    }else{
        if(m[1]==1) ans = 1;
        else ans = 0;
    }

    cout << ans << endl;
    return 0;
}