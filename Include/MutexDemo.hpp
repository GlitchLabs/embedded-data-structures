#pragma once
#include <iostream>
#include <thread>
#include <mutex>

int counter = 0;
std::mutex counterMutex;

void incrementCounter(int times) {
    for(int i = 0; i < times; i++) {
        // TODO: lock the mutex here
        counter++;
        // TODO: unlock the mutex here
    }
}
