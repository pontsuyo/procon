#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int L, R;
    cin >> L >> R;
    int l = L%2019;
    int r = R%2019;

    if(R-L+1>=2019){
        cout << 0 << endl;
    }else{
        int MIN = 2019;
        for(int i=L;i<R;i++){
            for(int j=i+1;j<=R;j++){
                MIN = min(MIN, ((i%2019)*(j%2019))%2019);
            }
        }
        cout << MIN << endl;
    }
}