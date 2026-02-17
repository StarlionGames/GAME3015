#pragma once
#include "Entity.hpp"
#include <string>

class Player : public Entity
{
public:
	Player(Game* game);

private:
	virtual void		drawCurrent() const;
	virtual void		buildCurrent();

	std::string			mSprite;
};

