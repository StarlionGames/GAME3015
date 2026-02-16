#pragma once
#include "Game.h"
using namespace DirectX;

class SceneNode
{
public:

	SceneNode(Game* game);

	void AttachChild();
	void DetachChild();

	void Update();
	void Draw() const;
	void Build();



protected:
	Game* game;

private:
	XMFLOAT
};

