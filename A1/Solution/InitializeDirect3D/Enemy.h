#pragma once
#include "Entity.hpp"
#include <string>

class Enemy : public Entity
{
public: 
	Enemy(Game* game);

private:
	virtual void DrawCurrent() const;
	virtual void BuildCurrent();

	std::string mSprite;
};

