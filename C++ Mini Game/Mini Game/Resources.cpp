#include <SFML/Graphics.hpp>

namespace Resources {
	struct Resources
	{
		sf::Texture mBackgroundTex;
		sf::Texture mPlayerTex;
		sf::Texture mEnemyTex;
		//sf::Texture mCzechHedgehogTex;
		//sf::Font	mMainFont;
		//sf::Shader	mPostProShader;
	};

	bool LoadResources(Resources& r)
	{
		bool success = true;

		success &= r.mBackgroundTex.loadFromFile("../assets/patchygrass_1.jpg");
		success &= r.mPlayerTex.loadFromFile("../assets/player.png");
		success &= r.mEnemyTex.loadFromFile("../assets/enemy.png");
		//success &= r.mCzechHedgehogTex.loadFromFile("../assets/obstacle.png");
		//success &= r.mMainFont.loadFromFile("../assets/RussoOne-Regular.ttf");
		//success &= r.mPostProShader.loadFromFile("../assets/shaders/postpro.vert", "../assets/shaders/postpro.frag");

		return success;
	}
}