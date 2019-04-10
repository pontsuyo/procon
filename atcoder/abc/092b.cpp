#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,d,x;
    cin >> n >> d>> x;
    int a;
    for(int i=0;i<n;i++){
        cin >> a;
        x += d/a + (int)(d%a>0);
    }
    cout << x << endl;
}