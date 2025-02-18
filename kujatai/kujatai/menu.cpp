#include "Menu.h"
#include <iostream> 

#define MAX_ITEM 3  

Menu::Menu(float width, float height)
{
    if (!font.loadFromFile("Rainbow Memories.otf")) {
        //wrroor
    }


    menu[0].setFont(font);
    menu[0].setFillColor(sf::Color::White);
    menu[0].setString("Play");
    menu[0].setPosition(sf::Vector2f(width / 2, height / (MAX_ITEM + 1) * 1));

    menu[1].setFont(font);
    menu[1].setFillColor(sf::Color::White);
    menu[1].setString("Tutorial");
    menu[1].setPosition(sf::Vector2f(width / 2, height / (MAX_ITEM + 1) * 2));

    menu[2].setFont(font);
    menu[2].setFillColor(sf::Color::White);
    menu[2].setString("Exit");
    menu[2].setPosition(sf::Vector2f(width / 2, height / (MAX_ITEM + 1) * 3));
}

Menu::~Menu() {

}

void Menu::draw(sf::RenderWindow& window) {
    for (int i = 0; i < MAX_ITEM; i++) {
        window.draw(menu[i]);
    }
}
