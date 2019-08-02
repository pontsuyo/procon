#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int n;
    cin >> n;
    int a[n];
    rep(i, n) cin >> a[i];
    if(n==1){
        cout << a[0] << endl;
    }else{
        if(n%2==0){
            for (int i = n-1; i >=1 ; i-=2)
            {
                cout << a[i] << " ";
            }
            for (int i = 0; i <=n-4 ; i+=2)
            {
                cout << a[i] << " ";
            }
            cout << a[n-2] << endl;
        }else{
            for (int i = n-1; i >=0 ; i-=2)
            {
                cout << a[i] << " ";
            }
            for (int i = 1; i <=n-4 ; i+=2)
            {
                cout << a[i] << " ";
            }
            cout << a[n-2] << endl;
        }
    }
    return 0;
}