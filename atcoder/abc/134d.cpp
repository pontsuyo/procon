#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7
#define INF (int) 2e9

int main(){
    int n;
    cin >> n;
    int a[n], b[n] = {};
    rep(i, n){
        cin >> a[i];
    }

    int m = 0;
    for (int i = n; i >=1; i--){
        int ma = n/i * i;
        int s = 0;
        for(int j=ma; j >= i; j-=i){
            s += b[j];
            if(j==i){
                if(s%2==a[i-1]){
                    b[i-1] = 0;
                }else{
                    b[i-1] = 1;
                    m++;
                }
            }
        }
    }

    cout << m << endl;
    for (int i = 0; i < n; i++){
        if(b[i]==1){
            cout << i+1 << " ";
        }
    }

    cout << endl;
    // printf("%d\n", N);
    return 0;
}