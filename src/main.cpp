#include <iostream>

int main() {
    int* values = new int[3]{1, 2, 3};
    std::cout << values[0] << '\n';
    delete[] values;

    int a = 10;
    int b = 1;
    std::cout << a / b << '\n';

    return 0;
}
