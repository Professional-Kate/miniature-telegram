#include "GameObjectCollection.h"

#include "IncomeManager.h"

std::list<GameObject*> GameObjectCollection::GameObjects = { (GameObject*) new IncomeManager() };
