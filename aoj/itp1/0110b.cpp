#include <iostream>
#include <stdio.h>
#include <string>
#include <cmath>
using namespace std;
 
int main(){
    float a,b,c;
    cin >> a >> b >> c;
    
    // cout << sin(c/180*M_PI)*a*b/2 << endl << a + b +sqrt(a*a+b*b-2*cos(c/180*M_PI)*a*b) << endl << b*sin(c/180*M_PI) << endl;
    printf("%.8lf\n%.8lf\n%.8lf\n", a*b/2*sin(M_PI*c/180), a + b +sqrt(a*a+b*b-2*cos(M_PI*c/180)*a*b), b*sin(M_PI*c/180));
}