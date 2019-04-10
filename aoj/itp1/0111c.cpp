#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
using namespace std;
 

class Dice{
public:
    int labels[6];

    Dice(int *s){
        for(int i=0;i<6;i++){
            labels[i] = s[i];
            
        }        
    }
    
    void update_state(char c){
        int tmp;
        switch(c){
            case 'N':
                tmp = labels[0];
                labels[0] = labels[1];
                labels[1] = labels[5];
                labels[5] = labels[4];
                labels[4] = tmp;
                break;
            case 'S':
                tmp = labels[0];
                labels[0] = labels[4];
                labels[4] = labels[5];
                labels[5] = labels[1];
                labels[1] = tmp;
                break;
            case 'W':
                tmp = labels[0];
                labels[0] = labels[2];
                labels[2] = labels[5];
                labels[5] = labels[3];
                labels[3] = tmp;
                break;
            case 'E':
                tmp = labels[0];
                labels[0] = labels[3];
                labels[3] = labels[5];
                labels[5] = labels[2];
                labels[2] = tmp;
                break;
        }
    }

    void roll(){
        int tmp = labels[1];
        labels[1] = labels[3];
        labels[3] = labels[4];
        labels[4] = labels[2];
        labels[2] = tmp;     
    }
    
};


int main(){
    int labels[6];
    for(int i=0;i<6;i++){
        cin >> labels[i];
    }
    
    Dice dice1(labels);
    // cout << dice1.labels[0] << endl;

    for(int i=0;i<6;i++){
        cin >> labels[i];
    }
    Dice dice2(labels);
    
    int top1 = dice1.labels[0];
    int flo1 = dice1.labels[1];

    if(dice2.labels[3]==top1){
        dice2.update_state('E');
    }else if(dice2.labels[2]==top1){
        dice2.update_state('W');
    }
    while(dice2.labels[0] != top1){
        dice2.update_state('N');
    }
    while(dice2.labels[1] != flo1){
        dice2.roll();
    }

    // int flag=0;
    // for(int i=0;i<6;i++){
    //     if(dice1.labels[i]!=dice2.labels[i]) flag = 1; break;
    // }
    // if(flag==0) cout << "Yes" << endl; else cout << "No" << endl;
    if(dice1.labels[2]==dice2.labels[2]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;

}