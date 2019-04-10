#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n; cin >> n;
    int x; cin >> x;
    int m;
    int MIN = 1e5;
    for(int i=0;i<n;i++){
        cin >> m;
        x -= m;
        MIN = min(MIN, m);
    }
    cout << n + x/MIN << endl;
}