#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n;
    cin >> n;
    int a;
    int ev=0, od=0;
    rep(i, n){
        cin >> a;
        if(a%2==0){
            ev++;
        }else{
            od++;
        }
    }
    cout << min(ev, od) << endl;
    // printf("%d\n", N);
    return 0;
}