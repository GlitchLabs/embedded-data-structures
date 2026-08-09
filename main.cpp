#include <iostream>
#include <bitset>
#include "DynamicArray.hpp"
#include "LinkedList.hpp"
#include "Subsystem.hpp"
#include "StateMachine.hpp"

int main(){
    // std::cout<<"hello world"<<std::endl;
    // DynamicArray<int> array;
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

    // LinkedList<char> encryptedMessages;
    // encryptedMessages.push_back('r');
    // encryptedMessages.push_back('8');
    // encryptedMessages.push_back('L');
    // encryptedMessages.push_back('!');
    // std::cout <<"Size of encryptedMessages = " <<encryptedMessages.size()<<std::endl;
    // encryptedMessages.print();
    // LinkedList<char> message = encryptedMessages;
    // std::cout<<" copied message = "<<std::endl;
    // message.print();
    // std::cout<<" "<<std::endl;
    // LinkedList<char>* copyCat(&message);
    // copyCat->push_back('B');
    // copyCat->push_back('M');
    // copyCat->print();
    // *copyCat = encryptedMessages;
    // copyCat->push_back('X');
    // copyCat->print();
    
    // GuidanceSystem* g = new GuidanceSystem();
    // g->update();
    // Subsystem* s = new GuidanceSystem();
    // s->update();
    // //delete s;
//StateMachine practice and testing
    // StateMachine stateMachine;
    
    // std::cout<< stateMachine.systemStatePrinter(stateMachine.getState())<<std::endl;
    // stateMachine.setTargetAcquired(true);
    // stateMachine.setLaunchAuthorized(true);
    // stateMachine.transitionState();
    // std::cout<< stateMachine.systemStatePrinter(stateMachine.getState())<<std::endl;
    // stateMachine.setThrusterIgnited(true);
    // stateMachine.transitionState();
    // std::cout<< stateMachine.systemStatePrinter(stateMachine.getState())<<std::endl;
    uint8_t reg = 0b10111101;
    std::cout <<std::bitset<8>(reg)<<std::endl;

    uint8_t mask = 1<<3;
    std::cout <<std::bitset<8>(mask)<<"\n and operation "<<std::endl;

    uint8_t res = reg & mask;
    std::cout <<std::bitset<8>(res)<<std::endl;

    std::cout << std::endl;
    for(int i = 7; i >= 0; i--) {
        std::cout << "bit "<< i << ": "<< ((res >> i) & 1)<<std::endl;
    }
    std::cout <<"Now we show setting AKA turnign on " <<std::endl;

    std::cout <<std::bitset<8>(reg)<<std::endl;

    mask = 1 << 6;
    
    res = reg | mask;
    std::cout <<std::bitset<8>(mask)<<" and After OR operation ";
    std::cout <<std::bitset<8>(res)<<std::endl;
    std::cout << "\nlets clear bit 7 now using AND and NOT operators"<<std::endl;
    mask = 1 << 7;
    mask = ~mask;

    std::cout <<"New Mask equals : "<<std::bitset<8>(mask)<<std::endl;
    res = reg & mask;
    std::cout <<std::bitset<8>(reg)<<std::endl;
    std::cout <<std::bitset<8>(mask)<<std::endl;
    std::cout<<"========AND========"<<std::endl;
    std::cout <<std::bitset<8>(res)<<std::endl;



    return 0;
}