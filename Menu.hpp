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
        Screen gameplay(sf::Event event, sf::RenderWindow &window);
    protected:
    private:
        sf::Texture _playTexture;
        sf::Sprite _playSprite;
        sf::Texture _settingsTexture;
        sf::Sprite _settingsSprite;
        sf::Texture _quitTexture;
        sf::Sprite _quitSprite;
};

#endif /* !MENU_HPP_ */
