#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int t;
    cin >> t;
    rep(i, t){
        ll n, k;
        cin >> n >> k;
        ll cnt = 0;
        while(n>0){            
            cnt += n%k;
            if(n/k==0){
                break;
            }
            n /= k;
            cnt++;
        }
        printf("%lld\n", cnt);
    }

    return 0;
}