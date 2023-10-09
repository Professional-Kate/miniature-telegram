#include <iostream>

#include "GameManager.h"
#include "IncomeManager.h"
#include "GameObject.h"

int main()
{
    GameManager::Start();
    IncomeManager* incomeManager = new IncomeManager();
    GameManager::gameObject = (GameObject*) incomeManager;
    
    std::cin.get();
    GameManager::End();

    delete incomeManager;
    return 0;
}
