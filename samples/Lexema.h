#pragma once
#include<string>
#include<iostream>
#include<algorithm>
#include <vector>
#include "MyQueue.h"
#include "MyStack.h"
#include <map>
using namespace std;

enum TypeElement{
    none,
    Operation,
    number
    //function?
    //float number?
};

int get_priority_operation(string c){
    if(c == "(")
        return -1;
    if(c == ")")
        return -2;
    if(c == "*" || c == "/")
        return 2;
    if(c == "+" || c == "-")
        return 1;
    return 0;
}

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
    TypeElement get_type(){
        return type;
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
        out<<"\n";
        return out;
    }
};



