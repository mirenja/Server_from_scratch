#include <iostream>

int main() {
    int i = 42;

    // p is a pointer that points to the location of i
    int* p = &i;

    //char par = &i;

    // Print the memory address stored in the pointer p
    std::cout << "printing p: " << p << std::endl;
    std::cout << "printing par: " << &i << std::endl;
    std::cout << "printing value: " << *p << std::endl;

    return 0;
}
