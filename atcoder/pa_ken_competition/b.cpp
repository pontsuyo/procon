#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int a, sum=0, cnt=0;
    for(int i=0;i<n;i++){
        cin >> a;
        sum += a;
        if(sum<=2018) cnt++;
    }
    cout << cnt << endl;
    return 0;
}