#include <iostream>
// #include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int x; cin >> x;
    if(x<4){
        cout << 1 << endl;
        return 0;
    }else{
        int n;
        int MAX = 1;
        for(int i=2;i<11;i++){
            n = pow(x, (float)1/i);
            // cout << n << endl;
            MAX = max((int)pow(n, i), MAX);
        }
        cout << MAX << endl;
    }
}