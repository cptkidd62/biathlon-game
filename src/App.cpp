#include "App.hpp"

App::App()
{
    window = new sf::RenderWindow(sf::VideoMode(800, 600), "Biathlon Game");
}

App::~App()
{
    delete window;
}

void App::run()
{
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window->isOpen())
    {
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window->close();
        }

        window->clear();
        window->draw(shape);
        window->display();
    }
}