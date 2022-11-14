#include <iostream>
#include "MyQueue.h"

using namespace std;
int main() {
    Queue<int>p(5);
    int cnt = 0;
    for(int i = 0;i<4;i++){
        p.push(i+1);
        cnt++;
        cout<<"cnt =" <<cnt<<'\n';
        cout<<p<<'\n';
    }
    p.pop();
    p.pop();
    p.pop();
    p.pop();
    cnt-=4;
    cout<<p<<'\n';
    for(int i = 0;i<9;i++){
        p.push(i+1);
        cnt++;
        cout<<"cnt =" <<cnt<<'\n';
        cout<<p<<'\n';
    }
    return 0;
}
