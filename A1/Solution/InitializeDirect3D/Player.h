#pragma once
#include "Entity.hpp"
#include <string>

class Player : public Entity
{
public:
	Player(Game* game);

private:
	virtual void DrawCurrent() const;
	virtual void BuildCurrent();
	
	// --- variables ---

	std::string sprite;
};

