#include <iostream>
#include <cmath>
// #include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    int a[20] = {};
    int i=1, j=1;
    int cnt = 0;
    a[cnt] = 1;
    while(true){
        if(min(pow(6,i), pow(9,j))>1e5) break;
        cnt++;
        if(pow(6,i)<pow(9,j)){
            a[cnt] = pow(6,i);
            i++;
        }else{
            a[cnt] = pow(9,j);
            j++;
        }
    }

    int wd = 0;
    for(int i=cnt; i>-1; i--){
        if(n <36) break;
        wd += n / a[i];
        n %= a[i];
    }

    wd += n % 3;
    n -= n%3;
    
    if(n % 9 == 3){
        if(n!=3){
            wd +=2;
            n -= 12;
        }else{
            wd += 3;
            cout << wd << endl;
            return 0;
        }
    }else if(n%9==6){
        wd += 1;
        n -=6;
    }
    wd += n/9;
    cout << wd << endl;
    return 0;
}