#include <iostream>
#include "Arifmetic.h"
#include "Exepcion.h"
using namespace std;
int main() {
//    string s = "((123 + 10*3 - 1)/(151 * 2)+(1 * 3))*20";
    string s = "(2+1 * 5";
    Arifmetic a(s);
    try{
        cout<<a.getans()<<'\n';
    }
    catch (Exepcion * ex){
        cout<<"Error!\n";
        ex->show();
    }
    /*
     что хочу добавить?
     1) Контроль ошибок
     Правильность Операций(нельзя две операции подряд, скобки)
     2) присвоение + добавление переменных
     операция =
     операция ;
     3)Ввод функций sin , cos (но это в последнюю очередь)
     */
    return 0;
}
