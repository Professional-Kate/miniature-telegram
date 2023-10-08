﻿#pragma once

class GameManager
{
public:
    /// \brief Start the Game
    static void Start();
    /// \brief End the Game
    static void End();

private:
    /// \brief Main game loop
    static void Update();
    static bool _shouldGameEnd;
};