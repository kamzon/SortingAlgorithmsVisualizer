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

    // std::vector<int> table = {12,88,71,3300,3301,3333,1,2,20,13};
    // int lenght = table.size();

    // for (int i=0; i<lenght; i++){
        
    //     for(int j=0; j<lenght-1; j++){
            
    //         if(table[j]>table[j+1]){
    //             int temp = table[j];
    //             table[j] = table[j+1];
    //             table[j+1] = temp;
                
    //         }
    //         for (int k=0;k<lenght ; k++){
    //             cout << table[k] << " || ";
    //         }
    //         cout << endl;
            
            
    //     }
        
        
    // }

    

    sf::RenderWindow window(sf::VideoMode(hight, width), "Sorting");
    sf::Event ev;

    sf::Image image;

    sf::Texture Texture;

    sf::Sprite Sprite;

    image.create(hight,width);

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
            BubbleSort(ListRectangles);

            DrawInWindow(image);

            DrawInVector(image, ListRectangles);

            Texture.loadFromImage(image);
            Sprite.setTexture(Texture);

            spaceIspressed = false;
        }
        


        window.clear();

        window.draw(Sprite);

        window.display();
    }


    return 0;
}