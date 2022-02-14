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
    window.clear();
}

Screen Settings::gameplay(sf::Event event, sf::RenderWindow &window)
{
    if (event.type == sf::Event::KeyPressed) {
        if (event.key.code == sf::Keyboard::Escape) {
            std::cout << "Passage en menu" << std::endl;
            return (Screen::MENU);
        }
    }
    return (Screen::SETTINGS);
}