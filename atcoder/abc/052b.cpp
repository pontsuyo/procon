#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int N;
    cin >> N;
    string S;
    cin >> S;
    int x = 0;
    int MAX = 0;
    rep(i, N){
        if(S[i]=='I'){
            x++;
        }else{
            x--;
        }
        MAX = max(MAX, x);
    }
    printf("%d\n", MAX);
    return 0;
}