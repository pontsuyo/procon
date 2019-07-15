#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a+b==c){
        if(a-b==c){
            cout << "?" << endl;
        }else{
            cout << "+" << endl;
        }
    }else{
        if(a-b==c){
            cout << "-" << endl;
        }else{
            cout << "!" << endl;
        }
    }
    return 0;
}