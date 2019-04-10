#include <iostream>
using namespace std;

int main(){
    int y, m, d;
    scanf("%d%d%d", &y, &m, &d);
    if(m==12 && d==25){
        cout << y-2018 << endl;
    }else{
        cout << "NOT CHRISTMAS DAY" << endl;
    }
    return 0;
}