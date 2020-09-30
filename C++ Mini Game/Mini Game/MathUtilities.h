#pragma once
#include <SFML/Graphics.hpp>


namespace Utilities {
	static class MathUtilities
	{
	public:
		#define PI_VALUE  (3.142f)
		typedef sf::Vector2f Float2;
		typedef sf::Vector3f Float3;

		float Clamp(float x, float lower, float upper);
		float LengthSq(Float2 v);
		float Length(Float2 v);
		Float2 Normalized(Float2 v);
		float Dot(Float2 v1, Float2 v2);
		Float2 Rotate(Float2 v, float angleRadians);
		float RadiansToDegrees(float deg);
		float DegreesToRadians(float deg);
		float ToAngle(Float2 v);
		float FRand();
	};
}