#pragma once
#include <SFML/Graphics.hpp>
#include <rectangle.h>

const unsigned int hight = 800;
const unsigned int width = 1000;


void DrawInWindow(sf::Image& img, unsigned hight, unsigned width);

void DrawInRectangle(sf::Image& img, forms::Rectangle& rec);