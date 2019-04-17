#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int x[4];
    int MAX = 2;
    rep(i, 4){
        cin >> x[i];
        MAX = max(MAX, x[i]);
    }

    vector <int> a;
    rep(i, 4){
        int tmp = MAX - x[i];

        if(tmp!=0){
            a.emplace_back(tmp);
        }
    }
    rep(i,3){
        cout << a[i];
        if(i!=2){
            cout << " ";
        }else{
            cout << endl;
        }
    }
    return 0;
}