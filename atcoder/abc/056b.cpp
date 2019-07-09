#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int w, a, b;
    cin >> w >> a >> b;
    if(b<=a+w && b >= a-w){
        cout << 0 << endl;
    }else{
        cout << min(abs(b-(a+w)), abs(a-(b+w))) << endl;
    }
    return 0;
}