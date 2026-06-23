#include <iostream>
#include "DynamicArray.hpp"
#include "LinkedList.hpp"

int main(){
    std::cout<<"hello world"<<std::endl;
    DynamicArray<int> array;
    // array.push_back(70);
    // array.push_back(80);
    // array.push_back(30);
    // array.push_back(31459);
    // for(size_t i = 0; i < 4; i++)
    //     std::cout << array.at(i) <<std::endl;

    // DynamicArray<int> array2 = array;
    // std::cout << "Copy: " << array2.at(0) <<std::endl;

    // int* a = new int[3];//new pointer to int array memory
    // a[0] = 10; a[1] = 20; a[2] = 30;

    // int* b = new int[3];//new pointer to memory holding contigous integer data

    // for(int i = 0; i < 3; i++)
    //     *(b + i) = *(a + i);
    // std::cout << b[0] << " , " << b[1] << " ," << b[2]<<std::endl;
    // delete[] a;
    // delete[] b;

    // for(size_t i = 0; i < array2.size(); i++)
    //     std::cout<<array2[i] <<std::endl;

    LinkedList<char> encryptedMessages;
    encryptedMessages.push_back('r');
    encryptedMessages.push_back('8');
    encryptedMessages.push_back('L');
    encryptedMessages.push_back('!');
    std::cout <<encryptedMessages.size()<<std::endl;
    encryptedMessages.print();
    return 0;
}