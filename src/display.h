#pragma once
#include <SFML/Graphics.hpp>
#include <rectangle.h>

const int hight = 1200;
const int width = 800;


void DrawInWindow(sf::Image& img);

void DrawInVector(sf::Image& img, std::vector<forms::Rectangle> &vecRectangles );

void FillVector(std::vector<forms::Rectangle> &vecRectangles, sf::Image Image);