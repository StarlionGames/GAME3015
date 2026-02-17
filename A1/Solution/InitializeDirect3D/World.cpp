#include "World.hpp"

World::World(Game* game)
	: mSceneGraph(new SceneNode(game))
	, mGame(game)
	, mPlayer(nullptr)
	, mBackground(nullptr)
	, mWorldBounds(-1.5f, 1.5f, 200.0f, 0.0f) //Left, Right, Down, Up
	, mSpawnPosition(0.f, 0.f)
	, mScrollSpeed(1.0f)
{
}

void World::update(const GameTimer& gt)
{
	mSceneGraph->update(gt);
}

void World::draw()
{
	mSceneGraph->draw();
}

void World::buildScene()
{
	std::unique_ptr<Player> player(new Player(mGame));
	mPlayer = player.get();
	mPlayer->setPosition(0, 0.1, 0.0);
	mPlayer->setScale(0.5, 0.5, 0.5);
	//mPlayerAircraft->setVelocity(mScrollSpeed, 0.0, 0.0);
	mSceneGraph->attachChild(std::move(player));

	std::unique_ptr<Enemy> enemy1(new Enemy(mGame));
	auto raptor = enemy1.get();
	raptor->setPosition(0.5, 0, 1);
	raptor->setScale(1.0, 1.0, 1.0);
	raptor->setWorldRotation(0, XM_PI, 0);
	mPlayer->attachChild(std::move(enemy1));

	std::unique_ptr<Sprite> backgroundSprite(new Sprite(mGame));
	mBackground = backgroundSprite.get();
	//mBackground->setPosition(mWorldBounds.left, mWorldBounds.top);
	mBackground->setPosition(0, 0, 0.0);
	mBackground->setScale(10.0, 1.0, 200.0);
	//mBackground->setVelocity(0, 0, -mScrollSpeed);
	mSceneGraph->attachChild(std::move(backgroundSprite));

	mSceneGraph->build();
}
