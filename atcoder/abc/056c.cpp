#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int x;
    cin >> x;
    int sum = 0;
    for(int i=1; i<= (int)1e6; i++){
        sum += i;
        if(sum >= x){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}