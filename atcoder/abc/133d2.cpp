#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int N;
    cin >> N;
    vector<ll> A(N);
    rep(i, N){
        cin >> A[i];
    }

    rep(i, N){
        ll tmp;
        ll r1;
        if(i==0){
            tmp = 0;
            rep(j, N){
                if(j%2==0){
                    tmp += A[j];
                }else{
                    tmp -= A[j];
                }
            }
            r1 = tmp;
            cout << tmp << " ";
        }else{
            tmp = 2*A[i-1] -tmp;
            cout << tmp << " ";
        }
    }
    cout << endl;
    return 0;
}