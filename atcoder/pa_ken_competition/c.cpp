#include <iostream>
using namespace std;

int main(){
    int b; cin >> b;
    int cnt=0;
    while(b>0){
        if(b%3==0){
            b = b*2/3;
            cnt++;
        }else if(b%3==1){
            b = b*2/3 + 1;
            cnt++;
        }else{
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}