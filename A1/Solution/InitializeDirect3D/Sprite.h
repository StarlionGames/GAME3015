#pragma once
#include "Entity.hpp"

class Sprite : public Entity
{
public:
	Sprite(Game* game);

private:
	virtual void drawCurrent() const;
	virtual void buildCurrent();
};

