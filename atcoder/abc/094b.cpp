#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,m,x;
    cin >> n >> m >> x;
    int a;
    int c_0 = 0, c_n = 0;
    for(int i=0;i<m;i++){
        cin >> a;
        if(a>x){
            c_n++;
        }else if(a<x){
            c_0++;
        }
    }
    cout << min(c_0, c_n) << endl;
}