#include "display.h"
#include <SFML/Graphics.hpp>
#include <rectangle.h>
#include <ctime>
#include <iostream>

using namespace forms;
using namespace std;

void DrawInWindow(sf::Image& img){

    for (unsigned i=0; i<hight; i++){
        for (unsigned j=0; j<width; j++){
            img.setPixel(i,j,sf::Color(255,255,255));
        }
    }
   
}

void DrawInVector(sf::Image& img, std::vector<forms::Rectangle> &vecRectangles ){

    for (unsigned k=0;k<vecRectangles.size(); k++){

        for (unsigned i=0; i<vecRectangles[k].width(); i++){
            for (unsigned j=0; j<vecRectangles[k].hight(); j++){
                img.setPixel(vecRectangles[k].x_pos()+i,vecRectangles[k].y_pos()+j,sf::Color(177,100,100));
            }
        }

    }
   
}

void FillVector(std::vector<forms::Rectangle> &vecRectangles, sf::Image Image){
    
    int xoffset=0;
    int image_size_x = Image.getSize().x;
    int image_size_y = Image.getSize().y;

    while (xoffset< image_size_x)
    {
        int h = rand() % Image.getSize().y - 50;
        
        // if (h> hight)
        // {
        //     h = rand() % Image.getSize().y - 50;
        // }
        if (h<5){
            h=5;
        }        
        
        forms::Rectangle rec{h,xoffset,image_size_y - h};

        vecRectangles.push_back(rec);

        xoffset+=rec.width();
        h=0;

    }


}
