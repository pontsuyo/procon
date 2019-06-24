#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007

int main(){
    int N;
    cin >> N;
    int tmp = 99;
    int tmp2;
    rep(i, 4){
        tmp2 = N%10;
        if(tmp==tmp2){
            printf("Bad\n");
            return 0;
        }
        tmp = tmp2;
        N /=10;
    }
    printf("Good\n");
    return 0;
}