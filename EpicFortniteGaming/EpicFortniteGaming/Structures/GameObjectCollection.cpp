#include "GameObjectCollection.h"

#include "../Game Objects/IncomeManager.h"

std::list<GameObject*> GameObjectCollection::GameObjects = { (GameObject*) new IncomeManager() };
