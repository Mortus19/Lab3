#pragma once
#include <string>
using namespace std;
class Operations{
public:
    virtual double calc(double x , double y)=0;
};

class adding:public Operations {
public:
    double calc(double x, double y){
        return x+y;
    }
};

class subtracting:public Operations {
public:
    double calc(double x, double y){
        return x-y;
    }
};

class multiplication:public Operations {
public:
    double calc(double x, double y){
        return x*y;
    }
};

class division:public Operations {
public:
    double calc(double x, double y){
        return x/y;
    }
};

Operations* get_operations(string t){
    if(t == "+")
        return new adding();
    if(t == "-")
        return new subtracting();
    if(t == "*")
        return new multiplication();
    if(t == "/")
        return new division();
}
