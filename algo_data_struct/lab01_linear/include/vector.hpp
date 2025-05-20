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

    class Iterator {
    public:
        Iterator(T* ptr) : ptr_(ptr) {}

        T& operator*() const { return *ptr_; }
        Iterator& operator++() { ++ptr_; return *this; }
        bool operator!=(const Iterator& other) const { return ptr_ != other.ptr_; }

    private:
        T* ptr_;
    };

    Iterator begin(){ return Iterator(data_); }
    Iterator end(){ return Iterator(data_ + size_); }

private:
    T* data_;
    size_t capacity_;
    size_t size_;

    void resize(int capacity);
};
