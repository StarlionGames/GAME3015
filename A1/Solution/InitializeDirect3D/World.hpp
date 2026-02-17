#pragma once
#include "SceneNode.hpp"
#include "Player.hpp"
#include "Enemy.hpp"
#include "Sprite.h"

class World
{
public: 
    explicit World(Game* window);
	void update(const GameTimer& gt);
	void draw();

	void buildScene();

private:
	enum Layer {
		Background,
		Air,
		LayerCount
	};

	Game* mGame;

	SceneNode* mSceneGraph;
	std::array<SceneNode*, LayerCount>	mSceneLayers;

	XMFLOAT4 mWorldBounds;
	XMFLOAT2 mSpawnPosition;
	float mScrollSpeed;
	Player* mPlayer;
	Sprite* mBackground;
	Enemy* mEnemy;
	
};

