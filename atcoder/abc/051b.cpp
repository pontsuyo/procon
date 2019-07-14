#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int k, s;
    cin >> k >> s;
    
    int cnt = 0;
    for(int x=0;x<=k;x++){
        for(int y=0;y<=k;y++){
            if(s-x-y>=0 && s-x-y<=k){
                cnt++;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
}