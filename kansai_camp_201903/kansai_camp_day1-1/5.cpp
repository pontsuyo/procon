#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int t; cin>> t;
    rep(i, t){
        int d;
        ll x;
        int MIN = 65;
        int cnt=0;
        cin >> d >> x;
        if(x==0){
            printf("Case %d: YES 0\n", i+1);
        }else if(x < pow(2, d+1)){
            while(x>=1){
                if(x%2==1 && MIN==65){
                    MIN = cnt;
                }
                x /= 2;
                cnt++;
            }
            printf("Case %d: YES %d\n", i+1, d-MIN+1);
        }else{
            printf("Case %d: NO\n", i+1);
        }
    }
    return 0;
}