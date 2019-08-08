#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int q;
    cin >> q;
    rep(i, q){
        ll n;
        cin >> n;
        ll cnt = 0;
        while(n>1){
            if(n%2==0){
                n /=2;
                cnt++;
            }else if(n%3==0){
                n = n/3*2;
                cnt++;
            }else if(n%5==0){
                n = n/5*4;
                cnt++;
            }else{
                cnt= -1;
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}