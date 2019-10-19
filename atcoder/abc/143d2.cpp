#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n;
    cin >> n;
    int l[n];
    rep(i, n){
        cin >> l[i];
    }
    int ans = 0;
    rep(i, n-2){
        for (int j = i+1; j < n-1; j++) {
            for(int k=j+1; k<n; k++){
                if(i<j && j<k){
                    if(l[i]<l[j]+l[k] && l[j]<l[i]+l[k] && l[k]<l[i]+l[j]) ans++;
                }
            }
        }
    }
    cout << ans << endl;
    // printf("%d\n", N);
    return 0;
}