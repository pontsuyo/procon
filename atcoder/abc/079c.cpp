#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<(int)(n);i++)

int main(){
    string s;
    cin >> s;
    int a[4];
    int sum;
    rep(i, 4){
        a[i] = s[i]-'0';
    }
    int d[2] = {1, -1};
    rep(i, 2){
        rep(j, 2){
            rep(k, 2){
                sum = a[0] + d[i]*a[1] + d[j]*a[2] + d[k]*a[3];
                if(sum==7){
                    printf("%d%c%d%c%d%c%d=7\n", a[0], i==0? '+':'-', a[1], j==0? '+':'-', a[2], k==0? '+':'-', a[3]);
                    return 0;
                }
            }
        }
    }
}