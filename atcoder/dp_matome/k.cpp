#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n, k;
    cin >> n >> k;
    int MIN = k;

    int a[n];
    rep(i, n){
        cin >> a[i];
        MIN = min(MIN, a[i]);
    }

    bool dp[100005];

    rep(i, k){
        dp[i] = false;
    }
    rep(i, n){
        dp[a[i]-1] = true;
    }

    for (int i = MIN; i < k; i++){        
        rep(j, n){
            if(i-a[j]>=0){
                if(!dp[i-a[j]]){
                    dp[i] = true;
                    break;
                }
            }
        }
    }

    if(dp[k-1]){
        cout << "First" << endl;
    }else{
        cout << "Second" << endl;
    }
    // printf("%d\n", N);
    return 0;
}