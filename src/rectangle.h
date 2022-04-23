#pragma once
#include <SFML/Graphics.hpp>

namespace forms{

    class Rectangle{
    
    public:


        Rectangle(){}
        Rectangle(int hight, int x_pos,int y_pos):hight_{hight},x_pos_{x_pos},y_pos_{y_pos}{}

        unsigned hight() const {return hight_;}
        unsigned width() const {return width_;}
        int x_pos() const {return x_pos_;}
        int y_pos() const {return y_pos_;}

    private:
        /* data */
        int hight_ = 0;
        int width_ = 5;
        int x_pos_ = 0;
        int y_pos_ = 0;

        
    };


}




