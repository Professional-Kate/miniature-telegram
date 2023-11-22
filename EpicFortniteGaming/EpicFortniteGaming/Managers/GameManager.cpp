#include <iostream>
#include "GameManager.h"
#include "../Structures/GameObjectCollection.h"

std::thread GameManager::_updateThread;
bool GameManager::_shouldGameEnd = false;

void GameManager::Start()
{
    std::cout << "Starting game..." << "\n\n";
    _updateThread = std::thread(&Update);
}

void GameManager::End()
{
    std::cout << "Ending game..." << "\n";
    _shouldGameEnd = true;
    _updateThread.join();
    // cleaning up any allocated objects
    for (const GameObject* gameObject : GameObjectCollection::GameObjects)
    {
        delete gameObject;
    }
}

void GameManager::Update()
{
    while (!_shouldGameEnd)
    {
        for (GameObject* gameObject : GameObjectCollection::GameObjects)
        {
            gameObject->Update();
        }
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

