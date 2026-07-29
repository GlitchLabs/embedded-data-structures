#include <iostream>
#include <thread>
#include <mutex>
#include <cassert>
#include <chrono>

int counter = 0;
std::mutex counterMutex;

void increment(int times) {
    for (int i = 0; i < times; i++) {
        std::lock_guard<std::mutex> lock(counterMutex);
        //std::mutex lock(counterMutex);
        counter++;
    }
}
std::mutex printMutex;
void duelPrinter(int times, const char* name) {
    for (int i = 0; i < times; i++) {
        std::lock_guard<std::mutex> lock(printMutex);
        std::cout << name <<" Thread"<<std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }
}

int main() {
    std::thread t1(duelPrinter, 100, "sandy");
    std::thread t2(duelPrinter, 100,"Craig Mac");

    t1.join();
    t2.join();

    std::cout << "Final counter: " << counter << std::endl;
    return 0;
}
