#include<iostream>
#include<vector>
#include <SFML/Graphics.hpp>
#include <display.h>
#include <rectangle.h>
#include <bubble_sort.h>


using namespace std;
using namespace sf;
using namespace forms;


int main() {

    srand(time(NULL));

    bool spaceIspressed = false;
    

    sf::RenderWindow window(sf::VideoMode(width, hight), "Sorting");
    sf::Event ev;

    sf::Image image;

    sf::Texture Texture;

    sf::Sprite Sprite;

    image.create(width,hight);

    DrawInWindow(image);

    vector<Rectangle> ListRectangles;

    FillVector(ListRectangles,image);

    DrawInVector(image, ListRectangles);

    Texture.loadFromImage(image);
    Sprite.setTexture(Texture);

    while (window.isOpen())
    {
        while (window.pollEvent(ev))
        {
            if (ev.type == sf::Event::Closed)
                window.close();

            if (ev.type == sf::Event::KeyReleased)
			{
				if(ev.key.code == sf::Keyboard::Space)
				{
					spaceIspressed = true;
				}
			}
        }

        Texture.loadFromImage(image);
        Sprite.setTexture(Texture);

        if (spaceIspressed)
        {
            BubbleSort(ListRectangles, image, window, Texture, Sprite);

            // DrawInWindow(image);

            // DrawInVector(image, ListRectangles);

            // Texture.loadFromImage(image);
            // Sprite.setTexture(Texture);

            spaceIspressed = false;
        }
        


        window.clear();

        window.draw(Sprite);

        window.display();
    }


    return 0;
}