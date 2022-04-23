#pragma once
#include <SFML/Graphics.hpp>
#include <rectangle.h>

const int width = 1500;
const int hight = 800;


void DrawInWindow(sf::Image& img);

void DrawInVector(sf::Image& img, std::vector<forms::Rectangle> &vecRectangles );

void FillVector(std::vector<forms::Rectangle> &vecRectangles, sf::Image Image);