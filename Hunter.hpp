/*
** EPITECH PROJECT, 2022
** Hunter_2022
** File description:
** Hunter
*/

#ifndef HUNTER_HPP_
#define HUNTER_HPP_

#include "IScreen.hpp"

class Hunter : public IScreen {
    public:
        Hunter();
        ~Hunter();
        void display(sf::RenderWindow &window);
        Screen gameplay(sf::Event event, sf::RenderWindow &window);

    protected:
    private:
};

#endif /* !HUNTER_HPP_ */
