#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    string S;
    cin >> S;
    sort(S.begin(), S.end());
    rep(i, S.size()-1){
        if(S[i]==S[i+1]){
            printf("no\n");
            return 0;
        }
    }
    printf("yes\n");
    return 0;
}