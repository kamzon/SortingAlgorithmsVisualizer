#include "display.h"
#include <SFML/Graphics.hpp>
#include <rectangle.h>
#include <ctime>
#include <iostream>

using namespace forms;
using namespace std;

void DrawInWindow(sf::Image& img){

    for (unsigned i=0; i<width; i++){
        for (unsigned j=0; j<hight; j++){
            // if (i>200)
            // {
                /* code */
                img.setPixel(i,j,sf::Color(0,0,0));
                
            // }else{
            //     img.setPixel(i,j,sf::Color(34, 48, 60));
            // }
            
        }
    }
   
}

void DrawInVector(sf::Image& img, std::vector<forms::Rectangle> &vecRectangles ){

    for (unsigned k=0;k<vecRectangles.size(); k++){

        for (unsigned i=0; i<vecRectangles[k].width(); i++){
            for (unsigned j=0; j<vecRectangles[k].hight(); j++){
                img.setPixel(vecRectangles[k].x_pos()+i,vecRectangles[k].y_pos()+j,sf::Color(200,255,255));
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
        
        if (h<2){
            h=2;
        }        
        
        forms::Rectangle rec{h,xoffset,image_size_y - h};

        vecRectangles.push_back(rec);

        xoffset+=5;
        h=0;

    }


}
