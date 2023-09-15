#include "timer.h"

#include <iostream>
#include <thread>

void timer::tik_tok() const
{
    while (!game_ending)
    {
        std::cout << "TikTok" << "\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}
