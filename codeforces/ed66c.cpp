#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int T;
    cin >> T;
    rep(i, T){
        int n, k;
        cin >> n >> k;
        int a[n];
        rep(i, n){
            cin >> a[i];            
        }
        int MIN = a[n-1] - a[0];
        int x;
        int mini = 0;
        rep(i, n-k){
            if(a[i+k] - a[i] < MIN){
                mini = i;
                MIN = a[i+k] - a[i];
            }
        }
        x = (a[mini+k]+a[mini])/2;
        printf("%d\n", x);
    }
    return 0;
}