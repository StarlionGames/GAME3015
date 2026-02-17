#pragma once
#include "Entity.hpp"
#include <string>

class Player : public Entity
{
public:
	Player(Game* game);

private:
	virtual void drawCurrent() const;
	virtual void buildCurrent();
	
	// --- variables ---

	std::string mSprite;
};

