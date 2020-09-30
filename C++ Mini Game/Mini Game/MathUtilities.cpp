#include <iostream>
#include <SFML/Graphics.hpp>
#include "MathUtilities.h"
namespace Utilities
{
	typedef sf::Vector2f Float2;
	typedef sf::Vector3f Float3;

	float MathUtilities::Clamp(float x, float lower, float upper)
	{
		return fmin(upper, fmax(x, lower));
	}

	//////////////////////////////////////////////////////////////////////////

	float MathUtilities::LengthSq(Float2 v)
	{
		return ((v.x * v.x) + (v.y * v.y));
	}

	//////////////////////////////////////////////////////////////////////////

	float MathUtilities::Length(Float2 v)
	{
		return sqrt((v.x * v.x) + (v.y * v.y));
	}

	//////////////////////////////////////////////////////////////////////////

	Float2 MathUtilities::Normalized(Float2 v)
	{
		float len = Length(v);
		return Float2(v.x / len, v.y / len);
	}

	//////////////////////////////////////////////////////////////////////////

	float MathUtilities::Dot(Float2 v1, Float2 v2)
	{
		return (v1.x * v2.x) + (v1.y * v2.y);
	}

	//////////////////////////////////////////////////////////////////////////

	Float2 MathUtilities::Rotate(Float2 v, float angleRadians)
	{
		return Float2(
			v.x * cos(angleRadians) - v.y * sin(angleRadians),
			v.x * sin(angleRadians) + v.y * cos(angleRadians)
		);
	}

	//////////////////////////////////////////////////////////////////////////

	float MathUtilities::RadiansToDegrees(float deg)
	{
		return deg * (180.0f / PI_VALUE);
	}

	//////////////////////////////////////////////////////////////////////////

	float MathUtilities::DegreesToRadians(float deg)
	{
		return deg * (PI_VALUE / 180.0f);
	}

	//////////////////////////////////////////////////////////////////////////

	float MathUtilities::ToAngle(Float2 v)
	{
		return atan2f(v.y, v.x);
	}

	//////////////////////////////////////////////////////////////////////////

	// Returns a random value between 0.0f - 1.0f
	float MathUtilities::FRand()
	{
		return ((float)std::rand() / (float)RAND_MAX);
	}
}