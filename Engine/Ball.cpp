#include "Ball.h"

bool Ball::doWallCollision(const Vec2& pos)
{
	if (pos.x < 0)
	{
		vel.x = -vel.x;
		return true;
	}
	if (pos.x > Graphics::ScreenWidth)
	{

	}

}
