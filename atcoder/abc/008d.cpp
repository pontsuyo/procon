#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int W, H;
    cin >> W >> H;
    int N;cin >> N;
    vector<int> X(N);
    vector<int> Y(N);
    
    rep(i, N){
        cin >> X[i] >> Y[i];
    }


    printf("%d\n", N);
    return 0;
}