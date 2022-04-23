#include "bubble_sort.h"
#include <rectangle.h>

using namespace std;

void BubbleSort(std::vector<forms::Rectangle> &rectList){
    forms::Rectangle temp_rec;
    int temp_x_location;

    for(int i=0; i<rectList.size() ;i++){
        for(int j=0; j<rectList.size()-1; j++){

            if (rectList[j].hight() > rectList[j+1].hight())
            {
                
                temp_x_location = rectList[j].x_pos();
                rectList[j].setX_pos(rectList[j+1].x_pos());
                rectList[j+1].setX_pos(temp_x_location);


                temp_rec = rectList[j];
                rectList[j] = rectList[j+1];
                rectList[j+1] = temp_rec;

            }
            
        }
    }
}