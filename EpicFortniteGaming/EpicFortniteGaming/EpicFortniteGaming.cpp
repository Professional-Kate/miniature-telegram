#include <iostream>

class chair
{
public:
    int legs;
};

int main()
{
    chair* awesome_chair = new chair(); // new must call malloc 
    awesome_chair->legs = 10;
    free(awesome_chair); // because it has to be freed
    std::cout << awesome_chair->legs << "\n"; // prints gabagool to the stdout - exit code 0

    chair* heap_chair = (chair*) calloc(1, sizeof(chair)); // messy af line when using (m|c)alloc
    heap_chair->legs = 24;
    delete heap_chair;
    std::cout << heap_chair->legs << "\n"; // unexpected exit code for program - exit code -1,073,741,819
    
    return 0;
}
