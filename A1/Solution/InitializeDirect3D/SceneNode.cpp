#include "SceneNode.h"
#include "Game.h"

SceneNode::SceneNode(Game* game) : mChildren(), mParent(nullptr), game(game)
{

}

void SceneNode::attachChild(Ptr child)
{
}

SceneNode::Ptr SceneNode::detachChild(const SceneNode& node)
{
	return Ptr();
}
