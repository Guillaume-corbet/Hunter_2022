/*
** hunter
** File description:
** Game
*/

#include "Game.hpp"

Game::Game()
{
    _window.create(sf::VideoMode(WIDTH, HEIGHT), NAME, sf::Style::Resize | sf::Style::Close);
    _screen = Screen::MENU;
    _gameScreen = new Menu();
}

Game::~Game()
{
}

void Game::run() {
    //sf::Texture texture;
    //sf::Sprite sprite;

    //texture.loadFromFile("fond.jpg");
    //sprite.setTexture(texture);
    while (_window.isOpen()) {
        if (_window.pollEvent(_event)) {
            if (_event.type == sf::Event::Closed)
                _window.close();
            _gameScreen->gameplay(_event);
        }
        //_window.clear();
        //window.draw(sprite);
        _gameScreen->display(_window);
        _window.display();
    }
}