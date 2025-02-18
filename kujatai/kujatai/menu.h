#ifndef MENU_H
#define MENU_H
#include<iostream>
#include <SFML/Graphics.hpp>

#define MAX_ITEM 3  

class Menu {
public:
    Menu(float width, float height);
    ~Menu();

    void draw(sf::RenderWindow& window);

private:
    sf::Font font;
    sf::Text menu[MAX_ITEM];
};

#endif
