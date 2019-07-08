#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    string A, B;
    cin >> A >> B;
    if(A.size()>B.size()){
        cout << "GREATER" << endl;
    }else if(A.size()<B.size()){
        cout << "LESS" << endl;
    }else{
        if(A>B){
            cout << "GREATER" << endl;
        }else if (A<B){
            cout << "LESS" << endl;
        }else{
            cout << "EQUAL" << endl;
        }
    }
    return 0;
}