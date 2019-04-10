#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int r=0;
    for(int i=a;i<=b;i++){
        int s=i%10, t=i/10000 % 10;
        int u=i/10 % 10, v = i/1000%10;
        if(s==t && u == v) r++;
    }

    // int r = (b-a)/100-1;
    
    // if(a%100 <= (a/10000 + a/1000%10*10)){
    //     r++;
    // } 
    // if(b%100 >= (b/10000 + b/1000%10*10)){
    //     r++;
    // }

    cout << r << endl;
}