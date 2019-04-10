#include <iostream>
#include <string>
using namespace std;


class Card{
    public:
    char mark;
    int value;
};

int main(){
    int n; cin >> n;
    Card c[36];
    string s;
    for(int i=0;i<n;i++){
        // cin >> s;
        scanf("%s", &s);
        // cout << s[0];
        c[i].mark = s[0];
        // c[i].value = stoi(s[1].c_str());
    }
    
    // for(int i=0;i<n;i++){
    //     cout << c[i].mark << c[i].value << endl;
    // }
}