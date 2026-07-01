#pragma once
#include <iostream>

template <class T>
class MyContainer
{
public:
    MyContainer(int size)
    {
        obj_arr = new T [size];
        n_elements = size;
    }
    ~MyContainer() 
    {
        delete[] obj_arr;
    }
    void clear() 
    {
        for(int q = 0 ; q < n_elements ; q ++){
            obj_arr[q] = NULL;
        }
    }
    int size()
    {
        return n_elements;
    }

    template <class U>
    friend std::istream& operator>> (std::istream &in, MyContainer<U> &b);
    template <class U>
    friend std::ostream& operator<< (std::ostream &out, MyContainer<U> &b);

protected:
    T * obj_arr = NULL;
    int n_elements;
};

template<class T>
std::istream& operator>> (std::istream &in, MyContainer<T> &b)
{
    for(int q =  0 ; q < b.size() ; q++) in >> b.obj_arr[q];

    return in;
}

template<class T>
std::ostream& operator<< (std::ostream &out, MyContainer<T> &b)
{
    for(int q = 0 ; q < b.size() ; q ++) out << b.obj_arr[q] << " ";
    return out;
}
