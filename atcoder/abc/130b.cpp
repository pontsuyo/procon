#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007

int main(){
    int N, X;
    cin >> N >> X;
    int L[N];
    rep(i, N){
        cin >> L[i];
    }
    int sum = 0;
    int i=0;
    for(i;i<N;i++){
        sum += L[i];
        if(sum>X) break;
    }
    printf("%d\n", i+1);
    return 0;
}