#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int t; cin >> t;
    rep(i, t){
        // int n; cin >> n;
        string n; cin >> n; 
        printf("Case %d: ", i+1);
        rep(j, n.size()*2-1){
            if(j<n.size()){
                cout << n[j];
            }else{
                cout << n[n.size()*2-1 -j-1];
            }
        }
        cout << endl;

    }
    return 0;
}