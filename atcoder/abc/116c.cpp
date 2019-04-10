#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n; cin >> n;
    vector<int> h;
    int tmp;
    rep(i,n){
        cin >> tmp;
        h.emplace_back(tmp);
    }

    int MIN;
    int mi = 0;
    rep(i,n){
        if(i==0){
            mi = h[i];
            MIN = mi;
        }else{
            if(h[i]<h[i-1]){
                if(h[i] < MIN){
                    MIN = h[i];
                }
            }else{
                mi += (h[i] - h[i-1]);
            }
        }
    }
    cout << mi << endl;
    return 0;
}