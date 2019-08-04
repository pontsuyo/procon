#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD (int) 1e9+7

int main(){
    int n;
    cin >> n;
    int h[n];
    rep(i, n){
        cin >> h[i];
    }
    for (int i = n-1; i >= 0 ; i--)
    {
        if(h[i]>=h[i-1]){
            continue;
        }else{
            if(h[i-1]-h[i]<=1){
                h[i-1]--;
            }else{
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}