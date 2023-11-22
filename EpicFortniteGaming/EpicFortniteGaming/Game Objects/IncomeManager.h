#pragma once
#include "Abstract/GameObject.h"

class IncomeManager final : GameObject
{
    void Update() override;
    int _money = 0;
};
