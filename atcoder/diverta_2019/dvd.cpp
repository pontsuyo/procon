#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    ll n;
    cin >> n;
    int rn = (int)sqrt(n);
    // printf("%d\n", rn);
    ll sum = 0;
    for(int i=1;i<=rn;i++){
        if(n%i==0 && (n/i-i!=1) && i!=n/i){
            sum += n/i-1;
        }
    }
    cout << sum << endl;
    return 0;
}