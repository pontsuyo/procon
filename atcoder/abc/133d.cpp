#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int N;
    cin >> N;
    int A[N];
    rep(i, N){
        cin >> A[i];
    }

    ll ans = 0;
    rep(i, N){
        if(i%2==0){
            ans += A[i];
        }else{
            ans -= A[i];
        }
    }

    
    rep(i, N){
        if(i==0){
            cout << ans << " ";
        }
        else{
            ans = -ans;
            ans += 2*A[i-1];
            cout << ans << " ";
        }
        // if(i%2==0){
        //     aans = ans;
        //     aans -= A[N-1];
        //     aans += 2*A[i-1];
        // }else{
        //     aans = -ans;
        //     aans -= A[N-1];
        //     aans += 2*A[i-1];
        // }
        
    }
    cout << endl;
    return 0;
}