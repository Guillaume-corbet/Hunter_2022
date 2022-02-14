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
    _oldScreen = new std::vector<Screen>;
    _oldScreenData = new std::vector<IScreen *>;
}

Game::~Game()
{
}

void Game::changeScreen(Screen newScreen) {
    if (_oldScreen->size() > 0 && newScreen == _oldScreen->at(_oldScreen->size() - 1)) {
        _gameScreen = _oldScreenData->at(_oldScreenData->size() - 1);
        _oldScreenData->pop_back();
        _oldScreen->pop_back();
    } else {
        if (newScreen == Screen::MENU) {
            _gameScreen->~IScreen();
            _gameScreen = new Menu();
        } else if (newScreen == Screen::SETTINGS) {
            _gameScreen->~IScreen();
            _gameScreen = new Settings();
        }
    }
    _screen = newScreen;
}

void Game::run() {
    //sf::Texture texture;
    //sf::Sprite sprite;

    //texture.loadFromFile("img/crosshair.png");
    //sprite.setTexture(texture);
    Screen newScreen;
    while (_window.isOpen()) {
        if (_window.pollEvent(_event)) {
            if (_event.type == sf::Event::Closed) {
                _gameScreen->~IScreen();
                _window.close();
                break;
            }
            newScreen = _gameScreen->gameplay(_event, _window);
            if (newScreen == Screen::QUIT) {
                _gameScreen->~IScreen();
                _window.close();
                break;
            } else if (_screen != newScreen) {
                changeScreen(newScreen);
            }
        }
        //_window.clear();
        //sprite.setPosition(sf::Mouse::getPosition().x - 25, sf::Mouse::getPosition().y - 25);
        _gameScreen->display(_window);
        //_window.draw(sprite);
        _window.display();
    }
}