#include "MathUtilities.h"

namespace Gameplay
{
	typedef sf::Vector2f Float2;
	typedef sf::Vector3f Float3;

	struct Bullet
	{
		Float2 position = Float2(0.0f, 0.0f);
		Float2 velocity = Float2(0.0f, 0.0f);

		float life = 0.0f;
	};

	struct Enemy
	{
		Float2 position = Float2(0.0f, 0.0f);
		Float2 velocity = Float2(0.0f, 0.0f);
		Float2 Knockback = Float2(0.0f, 0.0f);

		float health = 0.0f;
		float lastHit = 0.0f;
	};

	struct GameState
	{
		Float2 playerPosition = Float2(-500.0f, 0.0f);
		Float2 playerDir = Float2(0.0f, 0.0f);
		Float2 mousePosition = Float2(0.0f, 0.0f);

		float playerFireCooldown = 0.0f;
		float enemySpawnCounter = 0.0f;
		float difficultyCounter = 1.0f;

		int32_t playerScore = 0;
		int32_t playerLives = 3;

		std::vector<Bullet*> mBullets;
		std::vector<Enemy*> mEnemies;
	};
}