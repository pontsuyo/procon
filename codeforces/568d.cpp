#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007

int main(){
    int n;
    cin >> n;
    vector<int> b(n);
    rep(i, n){
        cin >> b[i];
    }
    sort(b.begin(), b.end());

    map<int, vector<int>> m;
    rep(i, n-1){
        int dif = b[i+1]-b[i];
        if(m.find(dif) != m.end()){
            m.at(dif).emplace_back(i);
        }else{
            vector<int> tmp(1, i);
            m.insert(make_pair(dif, tmp));
        }
    }

    if(m.size()==1){
        printf("1\n");
        return 0;
    }else if(m.size()==2){
        int k = 0;
        vector<pair<int, vector<int>>> p(2);
        for(auto i=m.begin(); i!=m.end(); ++i){
            p[k].first = i -> first;
            p[k].second = i -> second;
            
            a[k] = (i -> second).size();
            k++;
        }
        if((p[0].second.size()!=2 && p[1].second.size()!=2) || (p[0].first*2!=p[1].first || p[1].first*2!=p[0].first)){
            printf("-1\n");
            return 0;
        }
        rep(i, 2){
            if(p[i].second.size()==2){
                if((p[i].second[1]-p[i].second[0])==1){
                    printf("%d\n", p[i].second[1]+1);
                    return 0;  
                }
            }
        }
        printf("-1\n");
        return 0;
    }else if(m.size()==3){
        int k = 0;
        vector<pair<int, vector<int>>> p(3);
        int a[3];
        for(auto i=m.begin(); i!=m.end(); ++i){
            p[k].first = i -> first;
            p[k].second = i -> second;
            
            a[k] = (i -> second).size();
            k++;
        }
        sort(a, a+3);
        if(a[0]!=1 || a[1]!=1){
            printf("-1\n");
            return 0;
        }
        int tmp;
        vector<int> idx;
        vector<int> val;
        rep(i, 3){
            if(p[i].second.size()==1){                
                idx.emplace_back(p[i].second[0]);
                val.emplace_back(p[i].first);
            }else{
                tmp = p[i].first;
            }
            if((abs(idx[0]-idx[1])==1) && (val[0]+val[1]==tmp)){
                printf("%d\n", max(idx[0], idx[1])+1);
                return 0;
            }
        }
        printf("-1\n");
        return 0;
    }else{
        printf("-1\n");
        return 0;
    }
}