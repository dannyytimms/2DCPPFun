#include <SFML/Graphics.hpp>
#include <windows.h>
#include "Debugging.h"

#if defined( NDEBUG )

#pragma comment(lib, "sfml-graphics.lib")
#pragma comment(lib, "sfml-window.lib")
#pragma comment(lib, "sfml-system.lib")

#else // defined( NDEBUG )

#pragma comment(lib, "sfml-graphics-d.lib")
#pragma comment(lib, "sfml-window-d.lib")
#pragma comment(lib, "sfml-system-d.lib")

#endif // defined( NDEBUG )

#define UNUSED(x) (void)(x)


int main()
{

	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	Utilities::Debugging::DebugLog("Hello");

	return 0;
}
