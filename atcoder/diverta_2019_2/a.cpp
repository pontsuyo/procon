#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int N, K;
    cin >> N >> K;
    if(K!=1){
        printf("%d\n", N-K);
    }else{
        printf("%d\n", 0);
    }
    return 0;
}