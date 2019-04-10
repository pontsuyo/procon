#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;

    int s = a+b+c;
    int m = max(a, max(b,c));
    if((3*m-s)%2==0){
        cout << (3*m-s)/2 << endl;
    }else{
        cout << (3*m+3-s)/2 << endl;
    }
    return 0;
}