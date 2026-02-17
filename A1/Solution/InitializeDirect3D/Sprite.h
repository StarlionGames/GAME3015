#pragma once
#include "Entity.hpp"

class Sprite : public Entity
{
public:
	Sprite(Game* game);

private:
	virtual void DrawCurrent() const;
	virtual void BuildCurrent();
};

