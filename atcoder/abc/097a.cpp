#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    if(abs(a-c)<=d){
        cout << "Yes" << endl;
        return 0;
    }else{
        if(abs(b-a)<=d && abs(c-b)<=d){
            cout << "Yes" << endl;
            return 0;
        }else{
            cout << "No" << endl;
            return 0;
        }
    }
}