#include <iostream>
#include <fmt/core.h>

void test() {
    for (int first = 1; first < 10; first++) {
        for (int second = 1; second < first + 1; second++) {
            auto str = fmt::format("{1}+{0}={2:<2}", first, second, first + second);
            std::cout << str << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    test();
    return 0;
}
