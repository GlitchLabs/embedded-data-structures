#include <iostream>
#include "DynamicArray.hpp"

int main(){
    std::cout<<"hello world";
    DynamicArray<int> array;
    array.push_back(70);
    array.push_back(80);
    array.push_back(30);
    array.push_back(31459);
    //thought this was interesting and wanted to talk about it. i think this is the powerfull part of C++ you can create anything and the hard part you have to create everything lol
    //for( int elem : array)
        //std::cout<<elem<<std::endl;
    //for(int i = 0; i< array.size)
    //wow cant do that either!!!
    //do{int i = 0;}
    //while(array[i] !=nullptr){

    //}
    return 0;
}