#pragma once
#include <SFML/Graphics.hpp>
#include <rectangle.h>

const int hight = 800;
const int width = 1000;


void DrawInWindow(sf::Image& img, unsigned hight, unsigned width);

void DrawInVector(sf::Image& img, std::vector<forms::Rectangle> &vecRectangles );

void FillVector(std::vector<forms::Rectangle> &vecRectangles, sf::Image Image);