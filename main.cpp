#include <iostream>

#include "Pyramid.h"



int main() {

    Pyramid pyramid(3, 3, 2, 4);
    std::cout << "Pyramid surface: " << pyramid.getSurface() << std::endl;
    std::cout << "Pyramid volume: " << pyramid.getVolume() << std::endl;
    std::cout << "Pyramid sum of length of edges: " << pyramid.getEdgeLength() << std::endl;

    Pyramid pyramidWithDefaultValues;
    std::cout << "Default Pyramid surface: " << pyramidWithDefaultValues.getSurface() << std::endl;
    std::cout << "Default Pyramid volume: " << pyramidWithDefaultValues.getVolume() << std::endl;
    std::cout << "Default Pyramid sum of length of edges: " << pyramidWithDefaultValues.getEdgeLength() << std::endl;

    return 0;
}

