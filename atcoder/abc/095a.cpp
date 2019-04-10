#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)

int main(){
    int sum = 700;
    char c;
    rep(i,3){
        cin >> c;
        if(c=='o') sum += 100;
    }
    cout << sum << endl;
    return 0;
}