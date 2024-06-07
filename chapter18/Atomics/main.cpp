/**
 * Mehr zum Thema Atomics:
 *   C++ - Speicherverwaltung und Threading
 */

#include <iostream>
#include <atomic>
#include <thread>

std::atomic<int> counter(0);  // Initialize a counter to 0

void incrementCounter() {
    for (int i = 0; i < 1000000; i++) {
        counter++;  // Atomic increment
    }
}


int main() {
    std::thread thread1(incrementCounter);
    std::thread thread2(incrementCounter);

    thread1.join();
    thread2.join();

    std::cout << "Final counter value: " << counter << std::endl;

    return 0;
}
