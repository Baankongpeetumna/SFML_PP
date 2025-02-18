#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include "Menu.h"


int main()
{
    sf::RenderWindow window(sf::VideoMode({ 1080, 720 }), "Hahahahha");
    Menu menu(window.getSize().x, window.getSize().y);



    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }


        window.clear();
        menu.draw(window);
        window.display();
    }

    return 0;
}
