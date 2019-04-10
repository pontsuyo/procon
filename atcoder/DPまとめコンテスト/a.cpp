#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int h[n];
    int c[n];
    for(int i=0;i<n;i++){
        cin >> h[i];
    }
    c[0] = 0;
    c[1] = abs(h[1]-h[0]);
    for(int i=2;i<n;i++){
        c[i] = min(c[i-1] + abs(h[i]-h[i-1]), c[i-2] + abs(h[i]-h[i-2]));
    }
    cout << c[n-1] << endl;
    return 0;
}