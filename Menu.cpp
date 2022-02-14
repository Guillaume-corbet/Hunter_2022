/*
** Hunter_2022
** File description:
** Menu
*/

#include "Menu.hpp"

Menu::Menu()
{
    _playTexture.loadFromFile("img/LargeButtons/LargeButtons/PlayButton.png");
    _playSprite.setTexture(_playTexture);
    _settingsTexture.loadFromFile("img/LargeButtons/LargeButtons/SettingsButton.png");
    _settingsSprite.setTexture(_settingsTexture);
    _quitTexture.loadFromFile("img/LargeButtons/LargeButtons/QuitButton.png");
    _quitSprite.setTexture(_quitTexture);
    _playSprite.setPosition(sf::Vector2f(500, 100));
    _settingsSprite.setPosition(sf::Vector2f(500, 350));
    _quitSprite.setPosition(sf::Vector2f(500, 600));
}

Menu::~Menu()
{
}

void Menu::display(sf::RenderWindow &window)
{
    window.clear(sf::Color::White);
    window.draw(_playSprite);
    window.draw(_settingsSprite);
    window.draw(_quitSprite);
}

Screen Menu::gameplay(sf::Event event, sf::RenderWindow &window)
{
    /*if (event.type == sf::Event::KeyPressed) {
        if (event.key.code == sf::Keyboard::Enter) {
            std::cout << "Passage en settings" << std::endl;
            return (Screen::SETTINGS);
        }
    } else */if (event.type == sf::Event::MouseButtonPressed) {
        if (event.mouseButton.button == sf::Mouse::Left) {
            if (_settingsSprite.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) {
                return (Screen::SETTINGS);
            } else if (_playSprite.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) {
                return (Screen::HUNTER);
            } else if (_quitSprite.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)) {
                return (Screen::QUIT);
            }
        }
    }
    return (Screen::MENU);
}