#include <iostream>

using namespace std;

template<class T>
class Queue{
    int size;
    int start;
    int end;
    T* arr;
    int next(int i) {return (i+1)%size;}
    void repackage(){

    }

public:
    Queue(int _size = 1){
        size = _size;
        end = 0;
        start = next(end);
        arr = new T[size];
    }
    bool is_empty(){
        if(next(end) == start)
            return true;
        return false;
    }
    bool is_full(){
        if(next(next(end)) == start)
            return true;
        return false;
    }
    void push(T x){
        if(this->full){
            //Делаем перепаковку, увеличиваем память в 2 раза

        }
        end = next(end);
        arr[end] = x;
    }
    T pop(){
        if(this->is_empty())
            throw exception();
        T v = arr[start];
        start = next(start);
        return v;
    }







};