#include "Entity.hpp"

Entity::Entity(Game* game) : SceneNode(game), velocity(0,0)
{
}

void Entity::SetVelocityVector2(XMFLOAT2 v) 
{
	velocity = v;
}

void Entity::SetVelocityXY(float x, float y)
{
	velocity.x = x;
	velocity.y = y;
}

XMFLOAT2 Entity::GetVelocity() const
{
	return velocity;
}

void Entity::UpdateCurrent(const GameTimer& timer)
{
}
