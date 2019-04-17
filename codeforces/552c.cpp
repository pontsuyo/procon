#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int wa = a/3;
    int wb = b/2;
    int wc = c/2;

    int minw = min(wa, min(wb,wc));

    int a_ = a - minw * 3;
    int b_ = b - minw * 2;
    int c_ = c - minw * 2;

    // int ra = a%3;
    // int rb = b%2;
    // int rc = c%2;

    int foods[14];
    foods[0] = 0;
    foods[1] = 0;
    foods[2] = 1;
    foods[3] = 2;
    foods[4] = 0;
    foods[5] = 2;
    foods[6] = 1;
    foods[7] = 0;
    foods[8] = 0;
    foods[9] = 1;
    foods[10] = 2;
    foods[11] = 0;
    foods[12] = 2;
    foods[13] = 1;

    int add=0;
    for(int i=6;i>0;i--){
        for(int j=0;j<7;j++){
            vector <int> f;
            for(int k=0;k<i;k++){
                f.emplace_back(foods[k+j]);
            }
            if(count(f.begin(), f.end(), 0) <= a_ && count(f.begin(), f.end(), 1) <= b_ && count(f.begin(), f.end(), 2) <= c_){
                add = max(i, add);
            }
        }
    }

    cout << 7*minw + add << endl;
    return 0;
}