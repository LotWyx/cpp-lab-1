#include <iostream>

int main() {
    int* values = new int[3]{1, 2, 3};
    std::cout << values[3] << '\n';
    delete[] values;

    int a = 10;
    int b = 0;
    std::cout << a / b << '\n';

    return 0;
}
