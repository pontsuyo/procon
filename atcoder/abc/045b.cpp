#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    string a, b, c;
    cin >> a >> b >> c;
    int ai=0, bi=0, ci=0;

    char tmp = a[0];
    while(true){
        if(tmp=='a'){
            if(ai==a.size()){
                cout << "A" << endl;
                return 0;
            }
            tmp = a[ai];
            ++ai;
        }else if(tmp=='b'){
            if(bi==b.size()){
                cout << "B" << endl;
                return 0;
            }
            tmp = b[bi];
            ++bi;
        }else if(tmp=='c'){
            if(ci==c.size()){
                cout << "C" << endl;
                return 0;
            }
            tmp = c[ci];
            ++ci;
        }
    }
}