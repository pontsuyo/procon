#include <iostream>
#include <string>
#include <cmath>
using namespace std;
 
int main(){
    int n;
    float m, tmp;
    int s[1000]={};
    while(true){
        cin >> n;
        if(n==0) break;
        m = 0;
        for(int i=0;i<n;i++){
            cin >> s[i];
            m += s[i];
        }
        m /= n;
        tmp=0;
        for(int i=0; i<n;i++){
            tmp += (s[i]-m)*(s[i]-m);
        }
        cout << sqrt(tmp/n) << endl;
    }

}