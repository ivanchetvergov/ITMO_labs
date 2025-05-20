#pragma once 

#include <iostream>

template <typename T>
class MyVector{
public:
    MyVector();

    void push_back(T given);
    T pop_top();
    T pop_back();

    const T operator[](size_t index) const;
    T& operator[](size_t index);

    void print() const;

private:
    T* data_;
    int capacity_;
    size_t size_;

    void resize(int capacity);
};
