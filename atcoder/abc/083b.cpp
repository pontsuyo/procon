#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n, a, b;
    cin >> n >> a >> b;

    int sum = 0;
    rep(i, n+1){
        string s = to_string(i);
        int tmp = 0;
        rep(j, s.size()){
            tmp += (s[j] - '0');
        }
        if(tmp>= a && tmp <= b){
            sum+= i;
        }
    }
    cout << sum << endl;
    return 0;
}