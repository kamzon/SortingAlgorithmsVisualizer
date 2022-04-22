#include "display.h"
#include <SFML/Graphics.hpp>

void DrawInWindow(sf::Image& img, unsigned hight, unsigned width){

    for (unsigned i=0; i<width; i++){
        for (unsigned j=0; j<hight; j++){
            img.setPixel(i,j,sf::Color(255,255,255));
        }
    }
   
}