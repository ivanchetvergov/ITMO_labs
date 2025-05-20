#include "../include/list.hpp"

#include <iostream>

template <typename T>
MyList<T>::MyList()
    : Head_(nullptr), Tail_(nullptr) {}

template <typename T>
MyList<T>::MyList(const T& value){
    Head_ = new Node<T>(value);
    Tail_ = Head_;
}

template <typename T>
void MyList<T>::push_back(const T &value)
{ 
    Node<T>* newNode = new Node<T>(value);
    if (!Head_){
        Head_ = Tail_ = newNode;
    } else { 
        Tail_->pNext_ = newNode; // create new member
        Tail_ = newNode; // update tail
    }
}

template <typename T>
T MyList<T>::pop_back() {
    if (!Head_) throw std::runtime_error("list is empty");

    // if only one el in list
    if (Head_ == Tail_) {
        T value = Head_->value_;
        delete Head_;
        Head_ = Tail_ = nullptr;
        return value;
    }

    Node<T>* current = Head_;
    while (current->pNext_ != Tail_) {
        current = current->pNext_;
    }

    T value = Tail_->value_;
    delete Tail_;
    Tail_ = current;
    Tail_->pNext_ = nullptr;

    return value;
}

template <typename T>
T MyList<T>::pop_top(){
    if (!Head_) throw std::runtime_error("list is empty"); 
    
    T value = Head_->value_;
    Node<T>* temp = Head_; // ptr for savin' memory adress
    Head_ = Head_->pNext_;
    delete[] temp; // clean memory to avoid leaks 

    if (!Head_) Tail_ = nullptr;
    return value;
}

template <typename T>
void MyList<T>::clear(){
    Node<T>* current = Head_;
    while(current){
        Node<T>* temp = current;
        current = current->pNext_;
        delete temp;
    }
    Head_ = nullptr;
}

template class MyList<int>;