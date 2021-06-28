#pragma once
#include "Vec2.h"
#include "Graphics.h"
class Ball
{
public:
	void Update(float dt);
	bool doWallCollision(const Vec2& pos);

private:
	Vec2 pos;
	Vec2 vel;
	float radius = 7.0f;
};