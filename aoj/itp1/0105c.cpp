#include <iostream>
using namespace std;
 
int main(){
    int h, w, cnt;
    while(true){
        cin >> h >> w;
        if(h==0) break;
        for(int j=0;j<h;j++){
            for(int i=0;i<w;i++){
                if((i+j)%2==0){
                    cout << "#";
                }else{
                    cout << ".";
                }
            }
            cout << endl;
        }
    cout << endl;
    }
}