#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;++i)
#define MOD 1000000007

int main(){
    int H, W;
    cin >> H >> W;
    string s;
    for(int i=0;i<H+2;i++){
        if(i!=0 && i!=H+1){
            cin >> s;
        }
        for(int j=0;j<W+2;j++){
            if(i==0 || i==H+1 || j==0 || j==W+1){
                cout << '#';
            }else{
                cout << s[j-1];
            }
        }
        cout << endl;
    }
    return 0;
}