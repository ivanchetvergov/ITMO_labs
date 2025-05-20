#include "../include/vector.hpp"

#include <string.h>
#include <iostream>

template <typename T>
MyVector<T>::MyVector() 
    : size_(0), capacity_(10){
    data_ = new T[capacity_];
}

template <typename T>
void MyVector<T>::push_back(T given)
{
    if (size_ >= capacity_) {
        resize(capacity_ * 2); // arr to small, need to resize
    }

    data_[size_] = given;
    ++size_;
}

template <typename T>
T MyVector<T>::pop(){
    if (!size_) {
        throw std::out_of_range("vector is empty, cannot pop");
    }
    T value = data_[size_ - 1];   
    --size_;
    return value;    
}

template <typename T>
const T MyVector<T>::operator[](size_t index) const{
    if (index < 0 || index > size_){
        throw std::out_of_range("index out of range");
    }
    return data_[index];  
}

template <typename T>
T& MyVector<T>::operator[](size_t index){
    if (index < 0 || index > size_){
        throw std::out_of_range("index out of range");

    }
    return data_[index];  
}

template <typename T>
void MyVector<T>::resize(int capacity){
    if (capacity <= capacity_) return;

    T* new_data = new T[capacity];
    
    for (size_t i = 0; i < size_; ++i) {
        new_data[i] = data_[i];
    }

    delete[] data_;
    data_ = new_data;
    capacity_ = capacity;
}

template <typename T>
void MyVector<T>::print() const{
    std::cout << "vector data_: ";
    for (size_t i = 0; i < size_; ++i) {
        std::cout << data_[i] << " ";
    }
    std::cout << std::endl;
}

template class MyVector<int>;

