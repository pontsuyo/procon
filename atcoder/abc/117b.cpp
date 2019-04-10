#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n; cin >> n;
    int l;
    int sum=0;
    int MAX=1;
    rep(i, n){
        cin >> l;
        sum += l;
        MAX = max(MAX, l);
    }
    sum -= MAX;
    if(sum > MAX){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}