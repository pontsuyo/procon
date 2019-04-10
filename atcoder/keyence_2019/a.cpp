#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)

int main(){
    // int n[4];
    vector <int> v(4,0);

    rep(i,4){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    if(v[0] == 1 && v[1] == 4 && v[2] == 7 && v[3] == 9){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}