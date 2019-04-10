#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int MAX_N = 2000;
int N;
// char S[MAX_N + 1]; こっちだと「Sがこのスコープで宣言されてない」というエラーがsolve()で起きる．なぞ．
char S[2001];

void solve(){
    int a=0, b=N-1;
     
    while(a <= b){
        bool left = false;
        for(int i=0;a+i<= b; i++){
            if(S[a+i] < S[b-i]){
                left = true;
                break;
            }
            else if(S[a+i] > S[b-i]){
                left = false;
                break;
            }
        }
        if(left)putchar(S[a++]);
        else putchar(S[b--]);
    }
    putchar('\n');
    return;
}

int main(){
    cin >> N;
    string s;
    cin >> s;
    rep(i, N){
        S[i] = s[i];
    }
    solve();

    return 0;
}