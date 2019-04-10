#include <iostream>
#include <cmath>
// #include <algorithm>
using namespace std;

int main(){
    int a, b,c;
    cin >>  a >> b >> c;
    int k; cin >> k;
    int MAX = max(a,b);
    MAX = max(MAX,c);
    
    cout << a+b+c+ MAX * (pow(2, k)-1) << endl;
}