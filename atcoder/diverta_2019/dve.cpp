#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD (ll)1e9+7

int main(){
    int n;
    cin >> n;
    int a[n];
    rep(i, n){
        cin >> a[i];
    }
    int b[n+1];
    b[0] = 0;
    rep(i, n){
        b[i+1] = b[i]^a[i];
    }
    // rep(i, n+1){
    //     cout << b[i] << endl;
    // }

    int all = b[n+1];
    if(all!=0){
        int i=0;
        int tmp = 0;
        while(true){
            i++;
            if(b[i]^b[tmp]==all){
                tmp = i;
            }
            
        }
    }else{
            
    }
    return 0;
}