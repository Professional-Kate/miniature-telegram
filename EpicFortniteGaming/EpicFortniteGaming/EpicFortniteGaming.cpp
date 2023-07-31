#include <iostream>
#include "chair.h"


int main()
{
    chair* awesome_chair = new chair();
    awesome_chair->legs = 10;
    std::cout << awesome_chair->legs << "\n";

    awesome_chair->set_price("100 dabloons");
    std::string chair_price = awesome_chair->get_price();
    std::cout << chair_price << "\n";
    
    delete awesome_chair; 

    return 0;
}
