#pragma once
#include <thread>

#include "GameObject.h"

class GameManager
{
public:
    /// \brief Start the Game
    static void Start();
    /// \brief End the Game
    static void End();

    static GameObject* gameObject;

private:
    /// \brief Main game loop
    static void Update();
    static bool _shouldGameEnd;
    /// \brief dedicated thread for the Update loop
    static std::thread _updateThread;
};
