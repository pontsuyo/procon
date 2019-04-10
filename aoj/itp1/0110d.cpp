#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
using namespace std;
 
int main(){
    int n;
    int x[100] = {}, y[100] = {};
    double q;

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x[i];
    }
    for(int i=0;i<n;i++){
        cin >> y[i];
    }

    double tmp=0;
    for(int i=0;i<n;i++){
        tmp += abs(x[i]-y[i]);
    }
    cout << tmp << endl;

    tmp = 0;
    q = 2;
    for(int i=0;i<n;i++){
        tmp += pow((double)(x[i] -y[i]),q);
    }
    // cout << pow(tmp, 1.0/q) << endl;
    printf("%.8lf\n", pow(tmp, 1/q));

    tmp = 0;
    q = 3;
    for(int i=0;i<n;i++){
        tmp += pow((int)abs(x[i] -y[i]),q);
    }
    // cout << pow(tmp, 1/q) << endl;
    printf("%.8lf\n", pow(tmp, 1/q));

    tmp = 0;
    for(int i=0;i<n;i++){
        tmp = max((int)abs(x[i]-y[i]), (int)tmp);
    }
    cout << tmp << endl;
}