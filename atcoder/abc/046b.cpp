#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int N, K;
    cin >> N >> K;
    int s = 1;
    rep(i, N){
        if(i!=0){
            s *= K-1;
        }else{
            s *= K;
        }
    }
    printf("%d\n", s);
    return 0;
}