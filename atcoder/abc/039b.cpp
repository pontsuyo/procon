#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int x;
    cin >> x;
    rep(i, 240){
        if(pow(i, 4)==x){
            cout << i << endl;
            return 0;
        }
    }
}