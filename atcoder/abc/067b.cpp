#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n, k;
    cin >> n >> k;
    vector <int> l;
    int tmp;
    rep(i, n){
        cin >> tmp;
        l.emplace_back(tmp);
    }
    sort(l.begin(), l.end(), greater<int>());
    int sum = 0;
    rep(i, k){
        sum+= l[i];
    }
    cout << sum << endl;
    return 0;
}