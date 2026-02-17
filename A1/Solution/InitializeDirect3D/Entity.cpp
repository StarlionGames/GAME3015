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
	XMFLOAT2 velo;
	velo.x = velocity.x * timer.DeltaTime();
	velo.y = velocity.y * timer.DeltaTime();

	move(velo.x, velo.y, 0);

	renderer->World = getWorldTransform();
	renderer->NumFramesDirty++;
}
