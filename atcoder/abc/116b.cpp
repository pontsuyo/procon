#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int s; cin >> s;
    int MAX = 1000000;
    set <int> a;
    int tmp;
    rep(i, MAX){
        if(i==0){
            tmp = s;
            a.insert(tmp);
        }else{
            if(tmp%2==0){
                tmp /= 2;
            }else{
                tmp = tmp*3 + 1;
            }
        
            if(a.count(tmp)>0){
                cout << i+1 << endl;
                return 0;
            }
        a.insert(tmp);
        }
    }
    return 0;
}