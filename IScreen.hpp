/*
** Hunter_2022
** File description:
** IScreen
*/

#ifndef ISCREEN_HPP_
#define ISCREEN_HPP_

#include <SFML/Graphics.hpp>
#include <iostream>
#define WIDTH 1920
#define HEIGHT 1080
#define NAME "Hunter"

enum Screen {MENU, PAUSE, HUNTER, SETTINGS, HIGHSCORE, QUIT};

class IScreen {
    public:
        virtual ~IScreen() = default;
        virtual void display(sf::RenderWindow &window) = 0;
        virtual Screen gameplay(sf::Event event, sf::RenderWindow &window) = 0;

    protected:
    private:
};

#endif /* !ISCREEN_HPP_ */
