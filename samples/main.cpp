#include <iostream>
#include "Lexema.h"
using namespace std;
int main() {
    string s = "((123 + 10*3 - 1)/(151 * 2)+(1 * 3))*20";
    Queue<Lexema>q = parser(s);
    vector<Lexema>t = get_postfix(q);
    for(int i = 0;i<t.size();i++){
        cout<<t[i];
    }
    cout<<calculate(t)<<'\n';

    /*
     что хочу добавить?
     1) Контроль ошибок
     Правильность Операций(нельзя две операции подряд, скобки)
     Деление на 0
     2) присвоение + добавление переменных + возведение в степень
     операция =
     операция ;
     3)Ввод функций sin , cos (но это в последнюю очередь)

     */
    return 0;
}
