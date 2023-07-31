#include <iostream>

class chair
{
public:
    int legs;

    chair()
    {
        std::cout << "Making chair!" << "\n";
        this->legs = 200;
    }

    ~chair()
    {
        std::cout << "Removing chair!" << "\n";
    }
};

int main()
{
    chair* awesome_chair = new chair();
    awesome_chair->legs = 10;
    std::cout << awesome_chair->legs << "\n";
    delete awesome_chair; 

    return 0;
}
