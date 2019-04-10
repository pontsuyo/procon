#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0;i<n;i++)
#define MAX_N 10000

int heap[MAX_N], sz=0;

void push(int x){
    // 自分のノードの番号
    int i = sz++;
    while(i>0){
        // 親のノードの番号
        int p = (i-1) /2;

        // もう逆転していないなら抜ける
        if (heap[p] <= x) break;

        // 親のノードの数字を下ろして、自分は上に
        heap[i] = heap[p];
        i = p;
    }
    heap[i] = x;
}

int pop(){
    // 最小値
    int ret = heap[0];

    // 根に持ってくる値
    int x = heap[--sz];

    // 根から下ろしていく
    int i=0;
    while(i*2+1 < sz){
        // 子同士を比較
        int a = i*2+1, b=i*2+2;
        if(b<sz && heap[b] < heap[a]) a=b;

        // もう逆転していないなら終わり
        if(heap[a] >= x) break;

        // 子の数字を持ち上げる
        heap[i] = heap[a];
        i = a;
    }
    heap[i] = x;
    return ret;
}


int main(){
    return 0;
}