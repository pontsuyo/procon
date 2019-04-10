#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int a[2][n];
    for(int j=0;j<2;j++){
        for(int i=0;i<n;i++){
            cin >> a[j][i];
        }
    }
    int MAX=0;
    int sum;
    for(int i=0;i<n;i++){
        sum = 0;
        for(int j=0;j<i+1;j++){
            sum += a[0][j];
        }
        for(int j=i;j<n;j++){
            sum += a[1][j];
        }
        MAX = max(MAX, sum);
    }
    cout << MAX << endl;
}