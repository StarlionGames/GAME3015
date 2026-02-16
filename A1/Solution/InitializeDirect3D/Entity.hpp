#pragma once
#include "SceneNode.h"

class Entity : public SceneNode
{
public:
	Entity(Game* game);
	void SetVelocityVector2(XMFLOAT2 velocity);
	void SetVelocityXY(float x, float y);
	XMFLOAT2 GetVelocity() const;

	virtual void UpdateCurrent(const GameTimer& timer);

	// --- variables ---

	XMFLOAT2 velocity;
};

