#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n;
    cin >> n;
    // vector <int> a(n);
    // rep(i, n){
    //     cin >> a[i];
    // }
    set <int> s;
    int tmp;
    rep(i,n){
        cin >> tmp;
        s.insert(tmp);
    }
    auto it = s.begin();
    vector <int> a;

    rep(i,s.size()){
        a.emplace_back(*it++);
    }

    if(a.size()>3){
        cout << "-1" << endl;
    }else if(a.size()==3){
        if(a[2]-a[1] == a[1]-a[0]){
            cout << a[2]-a[1] << endl;
        }else{
            cout << -1 << endl;
        }
    }else if(a.size()==2){
        if((a[1]-a[0]) %2 ==0){
            cout << (a[1]-a[0])/2 << endl;
        }else{
            cout << a[1]-a[0] << endl;
        }
    }else{
        cout << 0 << endl;
    }
    return 0;
}