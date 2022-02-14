/*
** hunter
** File description:
** Game
*/

#ifndef GAME_HPP_
#define GAME_HPP_

#include "IScreen.hpp"
#include "Menu.hpp"

class Game {
    public:
        Game();
        ~Game();
        void run();

    protected:
    private:
        sf::RenderWindow _window;
        sf::Event _event;
        sf::Clock _fps;
        sf::Clock _gclock;
        Screen _screen;
        IScreen *_gameScreen;
        std::vector<Screen> *_oldScreen;
        std::vector<IScreen *> *_oldScreenData;
};

#endif /* !GAME_HPP_ */
