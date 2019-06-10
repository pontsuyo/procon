#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int N;
    cin >> N;
    int W[N];
    rep(i, N){
        cin >> W[i];
    }
    int s[N+1] = {};
    for(int i=1;i<N+1;i++){
        s[i] = s[i-1]+W[i-1]; 
    }
    int a = 0, b = 0;
    int MIN = 10000000;
    rep(t, N){
        a = s[t+1];
        b = s[N] - a;
        int dif = abs(a-b);
        MIN = min(MIN, dif);
    }
    printf("%d\n", MIN);
    return 0;
}