#pragma once
#include "Entity.hpp"
#include <string>

class Enemy : public Entity
{
public:
	Enemy(Game* game);

private:
	virtual void		drawCurrent() const;
	virtual void		buildCurrent();

	std::string			mSprite;
};

