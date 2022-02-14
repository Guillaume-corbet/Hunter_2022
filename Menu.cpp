/*
** Hunter_2022
** File description:
** Menu
*/

#include "Menu.hpp"

Menu::Menu()
{
}

Menu::~Menu()
{
}

void Menu::display(sf::RenderWindow &window)
{

}

Screen Menu::gameplay(sf::Event event)
{
    if (event.type == sf::Event::KeyPressed) {
        if (event.key.code == sf::Keyboard::Enter) {
            std::cout << "changement de screen" << std::endl;
            return (Screen::SETTINGS);
        }
    }
    return (Screen::MENU);
}