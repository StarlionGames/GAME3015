#include "Player.h"
#include "Game.h"

Player::Player(Game* game) : Entity(game) {
	sprite = "player"; // change this with the name of the texture lol
}

void Player::DrawCurrent() const
{
}

void Player::BuildCurrent()
{
	
}
