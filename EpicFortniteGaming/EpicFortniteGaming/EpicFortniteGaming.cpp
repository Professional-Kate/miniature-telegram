#include <iostream>

#include "Managers/GameManager.h"

int main()
{
    GameManager::Start();
    std::cin.get();
    GameManager::End();

    return 0;
}
