#include "GameManager.h"

#include <iostream>

std::thread GameManager::_updateThread;
bool GameManager::_shouldGameEnd = false;

void GameManager::Start()
{
    std::cout << "Starting game..." << "\n";
    _updateThread = std::thread(&Update);
}

void GameManager::End()
{
    std::cout << "Ending game..." << "\n";
    _shouldGameEnd = true;
    _updateThread.join();
}

void GameManager::Update()
{
    while (!_shouldGameEnd)
    {
        std::cout << "One second!" << "\n";
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

