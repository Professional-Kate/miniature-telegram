#pragma once

class GameObject
{
public:
    virtual ~GameObject() = default;

public:
    virtual void Awake();
    virtual void Update();
};
