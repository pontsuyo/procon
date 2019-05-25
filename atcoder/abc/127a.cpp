#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int a, b;
    cin >> a >> b;
    if(a>=13){
        printf("%d\n", b);
    }else if(a>=6){
        printf("%d\n", b/2);        
    }else{
        printf("%d\n", 0);
    }
    return 0;
}