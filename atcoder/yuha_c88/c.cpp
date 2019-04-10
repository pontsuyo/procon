#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)

int main(){
    int n; cin >> n;
    string s[n], u[n], v[n];
    string tmp;
    vector <int> ind(n,0);
    vector <bool> gb1(n,0);
    vector <bool> gb2(n,0);
    
    rep(i, n){
        cin >> s[i];
    }
    rep(i,n){
        cin >> u[i] >> tmp >> tmp >> v[i] >> tmp;
        rep(j, n){
            if(u[i]==s[j]){
                ind[i] = j;
            }
        }
    }

    for(int goods=n; goods>0; goods--){

        
    }
    return 0;
}