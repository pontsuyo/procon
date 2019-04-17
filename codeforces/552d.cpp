#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int n, b, a;
    cin >> n >> b >> a;
    int bi = b;
    int ai = a;

    vector <int> s(n);
    rep(i, n){
        cin >> s[i];
    }
    int i=0;
    for(i;i<n;i++){
        if(b>0 || a>0){
            if(s[i]==1 && a<ai && b>0){
                b--;
                a++;
            }else if(a>0){
                a--;
            }else{
                b--;
            }
        }else{
            break;
        }
    }
    cout << i << endl;
    return 0;
}