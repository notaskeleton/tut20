#include "RectF.h"

RectF::RectF(float top_in, float bottom_in, float left_in, float right_in)
	:
	top(top_in),
	bottom(bottom_in),
	left(left_in),
	right(right_in)
{
}

RectF::RectF(const Vec2& topleft, const Vec2& bottomright)
{
	RectF(topleft.y, bottomright.y, topleft.x, bottomright.x);
}

bool RectF::isOverlappingWith(const RectF& other) const
{
	return top < other.bottom && bottom > other.top 
		&& left < other.right && right > other.left;
	
}
