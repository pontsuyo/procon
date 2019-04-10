#include <stdio.h>
using namespace std;
 
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %d %f\n",a/b, a%b, double(a)/b);
}