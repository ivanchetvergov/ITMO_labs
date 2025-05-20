#pragma once

#include <iostream>
#include <string>
#include <sstream> 

#include "../include/list.hpp"

using namespace std;

int task_D(){
    int M; 
    // cout << "input number M: ";
    cin >> M;
    cin.ignore();

    string input;

    MyList<int> list;

    for (int i = 0; i < M; ++i){   
        // cout << "input operation: ";
        getline(cin, input);

        istringstream iss(input);
        char op;
        int value;

        iss >> op;

        switch (op){
            case '+':
                iss >> value;
                list.push_back(value);
                // list.print();
                break;
            case '-':
                try {
                    int popped_el = list.pop_top();
                    cout << popped_el << endl;
                } catch (const std::exception& e) {
                    // cout << e.what() << endl;
                }
                break;
            default: 
                // cout << "unknown operation" << endl;
                break;
        }


    }

    return 0;
}