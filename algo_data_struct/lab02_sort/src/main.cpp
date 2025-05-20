#include <iostream>
#include "../../lab01_linear/include/vector.hpp"
#include "../include/functions.hpp"

using namespace std;

int main(){
    int n; 
    // cin >> n;

    MyVector<int> vector;

    vector.push_back(77);
    vector.push_back(17);
    vector.push_back(12);
    vector.push_back(124);
    

    Sort::bubble(vector.begin(), vector.end());

    vector.print();

    return 0;
}