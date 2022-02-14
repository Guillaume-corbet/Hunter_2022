/*
** Hunter_2022
** File description:
** Settings
*/

#ifndef SETTINGS_HPP_
#define SETTINGS_HPP_

#include "IScreen.hpp"

class Settings : public IScreen {
    public:
        Settings();
        ~Settings();
        void display(sf::RenderWindow &window);
        Screen gameplay(sf::Event event);

    protected:
    private:
};

#endif /* !SETTINGS_HPP_ */
