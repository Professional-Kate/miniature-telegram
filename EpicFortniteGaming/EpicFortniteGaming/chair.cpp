#include <iostream>
#include "chair.h"

    chair::chair()
    {
        std::cout << "Making chair!" << "\n";
        this->legs = 200;
    }

    chair::~chair()
    {
        std::cout << "Removing chair!" << "\n";
    }

    std::string chair::get_price()
    {
        return this->price_;
    }

    void chair::set_price(std::string price)
    {
        this->price_ = price;
    }
