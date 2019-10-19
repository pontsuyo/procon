#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define MOD (int) (1e9+7)
#define INF (int) 2e9

int main(){
    int n, a;
    cin >> n >> a;
    if(n%500<=a){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}