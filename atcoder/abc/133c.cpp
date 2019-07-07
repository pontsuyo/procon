#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int L, R;
    cin >> L >> R;
    int l = L%673;
    int r = R%673;

    int ans = min(((L%2019)*((L+1)%2019))%2019, ((R%2019)*(R-1)%2019)%2019);
    if(ans<0) ans += 2019;
    
    if(R-L<=673){
        if(R-L+1>=3){
            if(l<r){
                cout << ans << endl;
            }else{
                cout << 0 << endl;
            }
        }else{
            cout << ans << endl;
        }
    }else{
        cout << 0 << endl;
    }
    return 0;
}