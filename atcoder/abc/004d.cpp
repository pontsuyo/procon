#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007


int main(){
    int a;
    int cnt = 0;
    rep(i, 3){
        cin >> a;
        int t = (a-1)/2;
        cnt += t*(t+1);
        if((a-1)%2==1) cnt += (a-1)/2+1;
    }
    printf("%d\n", cnt);
    return 0;
}