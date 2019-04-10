#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int h[n];
    int c[n];
    for(int i=0;i<n;i++){
        cin >> h[i];
    }
    k = min(k,n-1);

    for(int i=0;i<k+1;i++){
        c[i] = abs(h[i]-h[0]);
    }
    for(int i=k+1;i<n;i++){
        int MIN = 1e9;
        for(int j=1;j<=k;j++){
            MIN = min(MIN, c[i-j] + abs(h[i]-h[i-j]));
        }
        c[i] = MIN;
    }
    cout << c[n-1] << endl;
    return 0;
}