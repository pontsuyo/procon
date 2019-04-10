#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n; cin >> n;
    int a;
    int t;
    int MIN = 1e9;
    rep(i, n){
        t=0;
        cin >>a;
        while(a%2==0){
            a /=2;
            t +=1;
        } 

        MIN = min(MIN, t);
    }
    cout << MIN << endl;
    return 0;
}