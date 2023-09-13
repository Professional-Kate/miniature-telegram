#include <iostream>
#include <thread>

#include "timer.h"

/// \brief The game.
void game_boi()
{
    std::cout << "'yo this is such a good game' - 10/10 IGN" << "\n";
}

int main()
{
    std::thread game_boi_thread(&game_boi);
    std::thread clock_boi_thread(&timer::tik_tok);

    game_boi_thread.join();
    clock_boi_thread.join();

    return 0;
}
