#ifndef APP_HPP
#define APP_HPP

#include <SFML/Graphics.hpp>

class App
{
private:
    sf::RenderWindow *window;
public:
    App();
    ~App();

    void run();
};

#endif