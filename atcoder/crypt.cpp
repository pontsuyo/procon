#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    string s;
    cin >> s;
    int n = s.size();
    rep(i, n){
        printf("%c",s[i]-3);
    }
    printf("\n");
    return 0;
}