#include <iostream>

#include "GameManager.h"

int main()
{
    GameManager::Start();
    std::cin.get();
    GameManager::End();

    return 0;
}
