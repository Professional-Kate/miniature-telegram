#pragma once

class chair
{
public:
    int legs;
    chair();
    ~chair();

    /**
     * \brief Gets the price of this chair!
     * \return string price of this chair.
     */
    std::string get_price();

    /**
     * \brief sets the price of this chair.
     * \param price the new price of the chair.
     */
    void set_price(std::string price);

private:
    std::string price_;
};
