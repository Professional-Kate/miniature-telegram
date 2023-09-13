#pragma once

class timer
{
public:
    /// \brief Main game loop, runs forever otherwise it wouldn't be a game loop.
    static void tik_tok();

private:
    static constexpr bool is_game_ending = false;
};
