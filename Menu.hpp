/*
** Hunter_2022
** File description:
** Menu
*/

#ifndef MENU_HPP_
#define MENU_HPP_

#include "IScreen.hpp"

class Menu : public IScreen {
    public:
        Menu();
        ~Menu();
        void display(sf::RenderWindow &window);
        Screen gameplay(sf::Event event);
    protected:
    private:
};

#endif /* !MENU_HPP_ */
