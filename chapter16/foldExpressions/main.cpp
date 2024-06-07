#include <utility>
#include <iostream>

template<typename... Args>
bool all(Args... args) { return (... && args); }


// Usage example
int main() {

    bool b = all(true, true, true, false);

    if(b)
        std::cout << "b= true" << std::endl;
    else
        std::cout << "b= false" << std::endl;

    return 0;
}
