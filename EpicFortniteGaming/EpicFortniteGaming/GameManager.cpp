#include "GameManager.h"

#include <iostream>
#include <thread>

bool GameManager::_shouldGameEnd = false;

void GameManager::Start()
{
    std::cout << "Starting game..." << "\n";
    std::thread updateThread = std::thread(&Update);
    updateThread.detach();
}

void GameManager::End()
{
    std::cout << "Ending game..." << "\n";
    _shouldGameEnd = true;
}

void GameManager::Update()
{
    while (!_shouldGameEnd)
    {
        std::cout << "One second!" << "\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

