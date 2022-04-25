#include "bubble_sort.h"
#include <rectangle.h>

using namespace std;

void BubbleSort(std::vector<forms::Rectangle> &rectList,sf::Image& image, sf::RenderWindow &window, sf::Texture texture, sf::Sprite sprite, bool &space, bool &R){
    forms::Rectangle temp_rec;
    int temp_x_location;

	int lenght = rectList.size();
    for(int i=0; i<lenght ;i++){
        for(int j=0; j<lenght-1; j++){

            if (rectList[j].hight() > rectList[j+1].hight())
            {
                window.clear();
				//Moave bigge
				for (unsigned int x = 0; x < rectList[j].width(); x++)
				{
					for (unsigned int y = 0; y < rectList[j].hight(); y++)
					{
						image.setPixel(rectList[j + 1].x_pos() + x, rectList[j].y_pos() + y, sf::Color(200,255,255));
					}
				}

                //Delete the Big
				for (unsigned int x = 0; x < rectList[j].width(); x++)
				{
					for (unsigned int y = 0; y < rectList[j].hight(); y++)
					{
						image.setPixel(rectList[j].x_pos() + x, rectList[j].y_pos() + y, sf::Color(0,0,0));
					}
				}

                //Redraw Small 
				for (unsigned int x = 0; x < rectList[j + 1].width(); x++)
				{
					for (unsigned int y = 0; y < rectList[j + 1].hight(); y++)
					{
						image.setPixel(rectList[j].x_pos() + x, rectList[j + 1].y_pos() + y, sf::Color(200,255,255));
					}
				}
                
                temp_x_location = rectList[j].x_pos();
                rectList[j].setX_pos(rectList[j+1].x_pos());
                rectList[j+1].setX_pos(temp_x_location);


                temp_rec = rectList[j];
                rectList[j] = rectList[j+1];
                rectList[j+1] = temp_rec;

                texture.loadFromImage(image);
				sprite.setTexture(texture);

				window.draw(sprite);
				window.display();

            }

            
        }
    }

	space =false;
	R = false;
}