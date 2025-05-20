// sort.cpp
#include "../include/functions.hpp"


namespace Sort{

    template <typename Iterator>
    void bubble(Iterator begin, Iterator end){
        for (auto i = begin; i != end; ++i){
            for (auto j = begin; j != end; ++j){
                    if (*i < *j){
                        auto temp = *i;
                        *i = *j;
                        *j = temp;
                    }
                }
        }
    }
    
}