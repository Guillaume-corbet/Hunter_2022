/*
** Hunter_2022
** File description:
** Settings
*/

#include "Settings.hpp"

Settings::Settings()
{
}

Settings::~Settings()
{
}

void Settings::display(sf::RenderWindow &window)
{

}

Screen Settings::gameplay(sf::Event event)
{
    if (event.type == sf::Event::KeyPressed) {
        if (event.key.code == sf::Keyboard::Escape) {
            std::cout << "changement de screen" << std::endl;
            return (Screen::MENU);
        }
    }
    return (Screen::SETTINGS);
}