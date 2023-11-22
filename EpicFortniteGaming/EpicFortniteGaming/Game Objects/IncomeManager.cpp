#include "IncomeManager.h"

#include <iostream>

void IncomeManager::Update()
{
    _money++;
    GameObject::Update();
    std::cout << _money << "\n";
}
