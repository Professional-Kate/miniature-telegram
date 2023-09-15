#include "timer.h"

#include <iostream>
#include <thread>

void timer::tik_tok() const
{
    while (!game_ending_)
    {
        std::cout << "TikTok" << "\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

void timer::end_game() const
{
    this->game_ending_ = true;
    std::cout << "Game is ending..." << "\n";
}
