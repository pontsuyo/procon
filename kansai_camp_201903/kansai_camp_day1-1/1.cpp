#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int t; cin >> t;
    rep(i, t){
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;
        if(n%2==0){
            if(n/2+1 <= (a+b+c+d)){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }else{
            if((n+1)/2 <= (a+b+c+d)){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}