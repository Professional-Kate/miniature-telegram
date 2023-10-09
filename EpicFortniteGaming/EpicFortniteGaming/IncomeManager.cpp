#include "IncomeManager.h"

#include <iostream>

void IncomeManager::Update()
{
    GameObject::Update();
    std::cout << "Income Update" << "\n";
}
