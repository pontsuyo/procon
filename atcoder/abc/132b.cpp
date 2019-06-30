#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int n;
    cin >> n;
    vector<int> p(n);
    rep(i, n){
        cin >> p[i];
    }
    int cnt= 0;
    rep(i, n-2){
        int a = p[i],b=p[i+1],c=p[i+2];
        if((a>b && b>c) || (a<b && b<c)){
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}