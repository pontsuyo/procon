#include<iostream>
#include<string>
using namespace std;
 
int main()
{
	int n,m;
	string s[100],t[100];
	cin>>n;
	for(int i=0;i<n;i++) cin>>s[i];
	cin>>m;
	for(int i=0;i<m;i++) cin>>t[i];
	
	int maxv=0;
	for(int i=0;i<n;i++){
		int v=0;
		for(int j=0;j<n;j++){
			if(s[i]==s[j]) v++;
		}
		for(int j=0;j<m;j++){
			if(s[i]==t[j]) v--;
		}
		maxv=max(maxv,v);
	}
	
	cout<<maxv<<endl;
	return 0;
}

// #include <iostream>
// #include <string>
// using namespace std;

// class Card{
// public:
//     string name;
//     int freq;

//     Card(){
//         name = "NONE";
//         freq = 0;
//     }
// };

// int main(){
//     int n; cin >> n;
//     string s[n];
//     for(int i=0;i<n; i++){
//         cin >> s[i];
//     }

//     int m; cin>> m;
//     string t[m];
//     int cnt = n;

//     for(int i=0;i<m; i++){
//         cin >> t[i];
//     }

//     Card c[n];

//     bool exist = false;
//     int NUM = 0;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(s[i] == c[j].name){
//                 c[j].freq++;
//                 exist = true;
//             }
//         }
//         if(!exist){
//             c[NUM].name = s[i];
//             c[NUM].freq = 1;
//             NUM++;
//         }
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             if(t[i] == c[j].name){
//                 c[j].freq--;
//             }
//         }
//     }

//     int MAX = 0;
//     for(int i=0;i<n;i++){
//         MAX = max(MAX, c[i].freq);
//     }
//     cout << MAX << endl;
//     return 0;
// }