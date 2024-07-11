#include <iostream>

class HelloProgram {
public:
    HelloProgram() {
        std::cout << "Entering the Hello program saying...\n";
    }

    ~HelloProgram() {
        std::cout << "Then exiting...\n";
    }
};
    HelloProgram hello;

int main() {
    std::cout << "Hello, world.\n";

    return 0;
}
