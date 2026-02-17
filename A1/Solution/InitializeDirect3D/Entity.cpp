#include "Entity.hpp"
#include "Game.hpp"

Entity::Entity(Game* game) : SceneNode(game), mVelocity(0,0)
{
}

void Entity::setVelocity(XMFLOAT2 v) 
{
	mVelocity = v;
}

void Entity::setVelocity(float x, float y)
{
	mVelocity.x = x;
	mVelocity.y = y;
}

XMFLOAT2 Entity::getVelocity() const
{
	return mVelocity;
}

void Entity::updateCurrent(const GameTimer& timer)
{
	XMFLOAT2 velo;
	velo.x = mVelocity.x * timer.DeltaTime();
	velo.y = mVelocity.y * timer.DeltaTime();

	move(velo.x, velo.y, 0);

	renderer->World = getWorldTransform();
	renderer->NumFramesDirty++;
}
