#include <iostream>
#include "MyQueue.h"
#include "MyStack.h"

using namespace std;
int main() {
    Queue<int>p(5);
    for(int i = 0;i<4;i++){
        p.push(i+1);
        cout<<p<<'\n';
    }
    p.pop();
    p.pop();
    p.pop();
    p.pop();
    cout<<p<<'\n';
    for(int i = 0;i<9;i++){
        p.push(i+1);
        cout<<p<<'\n';
    }
    //========================================
    Stack<int>st(2);
    for(int i = 0;i<5;i++){
        st.push(i+1);
    }
    cout<<st<<'\n';
    for(int i = 0;i<5;i++){
        st.pop();
    }
    cout<<st<<'\n';
    for(int i = 0;i<5;i++){
        st.push(i+1+3);
    }
    cout<<st<<'\n';
    return 0;
}
