#include <stdio.h>
using namespace std;
 
int main(){
    int x, y;
    for(int i = 1; ;i++){
        scanf("%d %d",&x, &y);
        if(x == 0 and y == 0) break;
        if(x>y){
            printf("%d %d\n",y,x);
        }else{
            printf("%d %d\n",x,y);
        }
    }
}