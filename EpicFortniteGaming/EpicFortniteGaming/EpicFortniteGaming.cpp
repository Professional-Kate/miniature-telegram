#include <iostream>
#include <thread>

#include "timer.h"

/// \brief The game.
void game_boi()
{
    std::cout << "'yo this is such a good game' - 10/10 IGN" << "\n";
    std::this_thread::sleep_for(std::chrono::seconds(10));
}

int main()
{
    timer* game_timer = new timer();

    std::thread game_boi_thread(&game_boi);
    std::thread clock_boi_thread(&timer::tik_tok, game_timer);

    game_boi_thread.join();

    game_timer->end_game();
    clock_boi_thread.join();

    delete game_timer;

    return 0;
}
