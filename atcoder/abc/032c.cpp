#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n;
    ll k;
    cin >> n >> k;
    int s[n];
    bool zero = false;
    rep(i, n){
        cin >> s[i];
        if (s[i] == 0 ){
            zero = true;
        }
    }

    if(zero){
        cout << n << endl;
        return 0;
    }
    int l=0, r=0;
    ll p = 1;
    int cnt = 0;
    while (l <= n){
        while (p * s[r] <= k && r <= n-1){
            p *= s[r];
            r++;
        }
        cnt = max(cnt, r-l);
        if(r>l){
            p /= s[l];
        }else{
            p = 1;
        }
        l++;
    }

    cout << cnt << endl;
    // printf("%d\n", N);
    return 0;
}