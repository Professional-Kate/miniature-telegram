#include <iostream>

class chair
{
public:
    int legs;

    chair()
    {
        // interestingly, a call to (c|m)alloc won't construct an object
        std::cout << "Making chair!" << "\n";
        this->legs = 200;
    }

    ~chair()
    {
        // interestingly once more, a free() call won't cause a destructor to run
        std::cout << "Removing chair!" << "\n";
        // meaning, generic C things should stay away from C++
    }

    std::string get_price()
    {
        return this->price_;
    }

    void set_price(std::string price)
    {
        this->price_ = price;
    }

private:
    std::string price_;
};

int main()
{
    chair* awesome_chair = new chair();
    awesome_chair->legs = 10;
    std::cout << awesome_chair->legs << "\n";

    awesome_chair->set_price("10 Banana");
    std::string chair_price = awesome_chair->get_price();
    std::cout << chair_price << "\n";
    
    delete awesome_chair; 

    return 0;
}
