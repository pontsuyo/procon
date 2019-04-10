#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int a[n+2];
    a[0] = 0;
    a[n+1]=0;
    for(int i=1;i<n+1;i++){
        cin >> a[i];
    }
    int s = 0;
    for(int i=0;i<n+1;i++){
        s += abs(a[i]-a[i+1]);
    }
    for(int i=1;i<n+1;i++){
        cout << s + abs(a[i-1]-a[i+1]) - abs(a[i-1]-a[i]) - abs(a[i]-a[i+1]) << endl;
    }
}