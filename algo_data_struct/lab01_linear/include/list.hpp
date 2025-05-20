#pragma once

template <typename T>
struct Node{
    Node* pNext_;
    T value_;

    Node(const T& val) : pNext_(nullptr), value_(val) {}
};

template <typename T>
class MyList{
public:
    MyList();
    MyList(const T& value);

    ~MyList() { clear(); }

    void push_back(const T& value);
    T pop_back();
    T pop_top();


    void clear(); 

private:
    Node<T>* Head_;
    Node<T>* Tail_;
};