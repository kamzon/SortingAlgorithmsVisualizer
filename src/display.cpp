#include "display.h"
#include <SFML/Graphics.hpp>
#include <rectangle.h>

using namespace forms;

void DrawInWindow(sf::Image& img, unsigned hight, unsigned width){

    for (unsigned i=0; i<width; i++){
        for (unsigned j=0; j<hight; j++){
            img.setPixel(i,j,sf::Color(255,255,255));
        }
    }
   
}

void DrawInRectangle(sf::Image& img, Rectangle& rec){

    for (unsigned i=0; i<rec.width(); i++){
        for (unsigned j=0; j<rec.hight(); j++){
            img.setPixel(rec.x_pos()+i,rec.y_pos()+j,sf::Color(177,100,100));
        }
    }
   
}