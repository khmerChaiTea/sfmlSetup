#include<iostream>
#include <SFML\Graphics.hpp>
#include<SFML\Window.hpp>
#include<SFML\System.hpp>

using namespace sf;

int main()
{
    RenderWindow window(VideoMode(640, 480), "Example 05!");
    window.setFramerateLimit(60);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();

            //if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape)
            //    window.close();

        }

        //if (Keyboard::isKeyPressed(Keyboard::Escape))
        //    window.close();

        //if (Mouse::isButtonPressed(Mouse::Left))
        //    window.close();

        window.clear();

        window.display();
    }

    return 0;
}