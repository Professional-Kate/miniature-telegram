#pragma once
#include <list>

#include "../Game Objects/Abstract/GameObject.h"

struct GameObjectCollection
{
    /// \brief Collection of allocated GameObjects.
    /// All classes derived from GameObject should be allocated before adding.
    static std::list<GameObject*> GameObjects;
};
