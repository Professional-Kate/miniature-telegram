#pragma once

class GameObject
{
public:
    GameObject();
    virtual ~GameObject() = default;

public:
    /// \brief Any initialization code 
    virtual void Awake();
    /// \brief Any code that should be ran every second
    virtual void Update();
};
