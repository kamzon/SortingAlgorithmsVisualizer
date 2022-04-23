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

        void setX_pos(int x){
            x_pos_ = x;
        }
        void setY_pos(int y){
            y_pos_ = y;
        }
        void setHight(int h){
            hight_ = h;
        }

    private:
        /* data */
        int hight_ = 5;
        int width_ = 4;
        int x_pos_ = 0;
        int y_pos_ = 0;

        
    };


}




