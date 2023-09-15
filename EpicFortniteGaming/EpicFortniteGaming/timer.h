#pragma once

class timer
{
public:
    /// \brief Main game loop, runs forever otherwise it wouldn't be a game loop.
    void tik_tok() const;

    /// \brief Ends the game.
    void end_game() const;

private:
    mutable bool game_ending_ = false;
};
