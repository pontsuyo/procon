#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    int cnt = 0;
    rep(i, x){
        int tmp = n-x+i;
        // printf("%d, %d, %c\n", tmp, n-y-1, s[tmp]);

        if(tmp==n-y-1 && s[tmp]=='0'){
            cnt++;
        }
        if(tmp!=n-y-1 && s[tmp]=='1'){
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}