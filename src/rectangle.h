#pragma once
#include <SFML/Graphics.hpp>

namespace forms{

    class Rectangle{
    
    public:


        Rectangle(){}
        Rectangle(unsigned hight,int x_pos,int y_pos):hight_{hight},x_pos_{x_pos},y_pos_{y_pos}{}

        unsigned hight() const {return hight_;}
        unsigned width() const {return width_;}
        int x_pos() const {return x_pos_;}
        int y_pos() const {return y_pos_;}

    private:
        /* data */
        unsigned hight_ = 0;
        unsigned width_ = 10;
        int x_pos_ = 0;
        int y_pos_ = 0;

        
    };


}




