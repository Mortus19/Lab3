#include <iostream>
#include "Lexema.h"
using namespace std;
int main() {

    string s = "(123 + 10  *2 - 1)/20";
    Queue<Lexema>q = parser(s);
    vector<Lexema>t = get_postfix(q);
    for(int i = 0;i<t.size();i++){
        cout<<t[i];
    }
    cout<<calculate(t)<<'\n';
    return 0;
}
