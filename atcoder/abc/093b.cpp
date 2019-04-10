#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b, k;
    cin >> a >> b >> k;

    if(b-a+1 <k*2){
        for(int i=a;i<b+1;i++){
            cout << i << endl;
        }
    }else{
        for(int i = 0; i < k; i++){
            cout << a+i << endl;
        }
        for(int i = k; i > 0; i--){
            cout << b-i+1 << endl;
        }
    }
}