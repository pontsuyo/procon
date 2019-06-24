#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007

int main(){
    int N, L;
    cin >> N >> L;
    int R = L+N-1;
    int sum = (L+R)*N/2;
    if(L>0){
        sum -= L;
    }else if(R<0){
        sum -= R;
    }
    printf("%d\n", sum);
    return 0;
}