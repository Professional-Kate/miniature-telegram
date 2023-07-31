#include <iostream>


int main(int argc, char* argv[])
{
    int* int_pointer = (int*) calloc(0, sizeof(int));
    *int_pointer = 10;

    std::cout << *int_pointer;
    return 0;
}
