#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int n;
    cin >> n;
    if(n<10){
        cout << n << endl;
    }else if(n<100){
        cout << 9 << endl;
    }else if(n<1000){
        cout << 9 + (n-100+1) << endl;
    }else if(n<10000){
        cout << 909 << endl;
    }else if(n<100000){
        cout << 909 + (n-10000+1) << endl;
    }else {
        cout << 90909 << endl;
    }
    return 0;
}