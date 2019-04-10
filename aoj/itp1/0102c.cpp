#include<iostream>
using namespace std;

int main()
{
    int a,b,c, tmp; 
    cin >> a >> b >> c;
    if(a>b){
        tmp = b;
        b = a;
        a = tmp;
    }
    if(b>c){
        tmp = b;
        b = c;
        c = tmp;
    }
    if(a>b){
        tmp = b;
        b = a;
        a = tmp;
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}