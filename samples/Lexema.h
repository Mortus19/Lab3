#include<string>
#include<iostream>
#include<algorithm>
#include "MyQueue.h"
using namespace std;

enum TypeElement{
    none,
    Operation,
    number
    //function?
    //float number?

};

class Lexema{
    TypeElement type;
    string s;
public:
    Lexema(string _s = "" , TypeElement _type = none){
        type = _type;
        s = _s;
    }
    string get_string(){
        return s;
    }
    friend ostream& operator << (ostream& out, Lexema& p) {
        out << "{" << p.s << ", ";
        if (p.type == Operation) {
            out << "operation";
        }
        else if (p.type == number) {
            out << "number";
        };
        out << "}";
        return out;
    }
};

Queue<Lexema> parser(string in){
    //стандартная версия парсера для чисел и операций
    Queue<Lexema>ans;
    int state = 0;
    string tmp = "";
    //Добавляем пробел, чтобы корректно обработался ввод строки в цикле
    in+=' ';
    string operation = "/*+-";
    string separator = " /n/t";
    for(char c :in){
        switch(state)
        {
            case 0:
                //операция
                if(c>='0' && c<='9'){
                    tmp = c;
                    state = 1;
                    break;
                }
                if(count(operation.begin(),operation.end(),c) == 1){
                    //встретился символ с операции
                    tmp = c;
                    Lexema l(tmp,Operation);
                    ans.push(l);
                    break;
                }
            case 1:
                if(c>=0 && c<=9){
                    tmp+=c;
                    break;
                }
                if(count(operation.begin(),operation.end(),c) == 1){
                    //встретился символ с операции
                    Lexema l(tmp,number);
                    ans.push(l);
                    tmp = c;
                    Lexema t(tmp,Operation);
                    ans.push(t);
                    state = 0;
                    break;
                }
                if(count(separator.begin(),separator.end(),c) == 1){
                    //встретился сепаратор
                    Lexema l(tmp,number);
                    ans.push(l);
                    state = 0;
                    break;
                }
        }
    }
    return ans;
}