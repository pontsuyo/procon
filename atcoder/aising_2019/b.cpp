#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    int p;
    int s=0, t=0, u=0;
    rep(i,n){
        cin >> p;
        if(p<=a){
            s++;
        }else if(p<=b){
            t++;
        }else{
            u++;
        }
    }
    cout << min(s, min(t, u)) << endl;
    return 0;
}