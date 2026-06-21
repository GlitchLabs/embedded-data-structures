#include <iostream>
#include "DynamicArray.hpp"

int main(){
    std::cout<<"hello world"<<std::endl;
    DynamicArray<int> array;
    array.push_back(70);
    array.push_back(80);
    array.push_back(30);
    array.push_back(31459);
    for(size_t i = 0; i < 4; i++)
        std::cout << array.at(i) <<std::endl;
    return 0;
}