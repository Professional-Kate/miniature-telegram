#pragma once

class timer
{
public:
    /// \brief Main game loop, runs forever otherwise it wouldn't be a game loop.
    void tik_tok() const;

    bool game_ending = false;
};
