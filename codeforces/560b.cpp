#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n;
    cin >> n;
    int a[n];
    rep(i, n){
        cin >> a[i];
    }
    sort(a, a+n);
    int cnt = 0;
    int MAX = 1;
    rep(i, n){
        if(MAX<=a[i]){
            MAX++;
        }
    }
    printf("%d\n", MAX-1);
    return 0;
}