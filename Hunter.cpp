/*
** EPITECH PROJECT, 2022
** Hunter_2022
** File description:
** Hunter
*/

#include "Hunter.hpp"

Hunter::Hunter()
{
}

Hunter::~Hunter()
{
}

void Hunter::display(sf::RenderWindow &window)
{
    window.clear();
}

Screen Hunter::gameplay(sf::Event event, sf::RenderWindow &window)
{
    if (event.type == sf::Event::KeyPressed) {
        if (event.key.code == sf::Keyboard::Escape) {
            std::cout << "Passage en settings" << std::endl;
            return (Screen::MENU);
        }
    }
    return (Screen::HUNTER);
}