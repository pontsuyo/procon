#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n;
    cin >> n;
    int cnt=0;
    while(n>9){
        n++;
        while(n%10==0){
            n /= 10;
        }
        cnt++;
    }
    cout << cnt+9 << endl;
    return 0;
}