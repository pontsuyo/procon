#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int q;
    cin >> q;
    rep(i, q){
        int n;
        cin >> n;
        int a[4*n];
        rep(j, 4*n){
            cin >> a[j];
        }
        sort(a, a+4*n);

        bool flag = true;
        rep(j, n){
            int s;
            if(a[2*j]==a[2*j+1] && a[4*n-2*j-1]==a[4*n-2*j-2]){
                if(j==0){
                    s = a[2*j] * a[4*n-2*j-1];
                }else{
                    if(a[2*j] * a[4*n-2*j-1] != s){
                        flag = false;
                        break;
                    }
                }
            }else{
                flag=false;
                break;
            }
        }
        if(flag){
            cout << "YES" << endl;            
        } else{
            cout << "NO" << endl;
        }
    }
    // printf("%d\n", N);
    return 0;
}