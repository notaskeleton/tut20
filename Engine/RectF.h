#pragma once
#include "Vec2.h"
#include "Graphics.h"

struct RectF
{
	RectF() = default;
	RectF(float top_in, float bottom_in, float left_in, float right_in);
	RectF(const Vec2& topleft, const Vec2& bottomright);
	RectF(Vec2& topleft, float width, float height);
	bool isOverlappingWith(const RectF& other) const;

	float top;
	float bottom;
	float left;
	float right;
};