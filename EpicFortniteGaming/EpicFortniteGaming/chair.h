#pragma once

class chair
{
public:
    int legs;
    chair();
    ~chair();

    std::string get_price();
    void set_price(std::string);

private:
    std::string price_;
};
