// #include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
 
int main(){
    int h, w;
    while(true){
        cin >> h >> w;
        if(h==0) break;

        string s = "";
        for(int i=0;i<w;i++){
            s += "#";
        }
        for(int i=0;i<h;i++){
            cout << s << endl;
        }
        cout << endl;
    }
}