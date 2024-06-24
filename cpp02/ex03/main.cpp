#include "Point.hpp"


int main() {
    //Punto dentro del triángulo
    Point a(0, 0);
    Point b(5, 0);
    Point c(0, 5);
    Point pointInside(2, 2);
    bool isInside = bsp(a, b, c, pointInside);
    if (isInside) {
        std::cout << "El punto (2, 2) está dentro del triángulo." << std::endl;
    } else {
        std::cout << "El punto (2, 2) está fuera del triángulo." << std::endl;
    }

    //Punto fuera del triángulo
    Point pointOutside(6, 6);
    bool isOutside = bsp(a, b, c, pointOutside);
    if (isOutside) {
        std::cout << "El punto (6, 6) está dentro del triángulo." << std::endl;
    } else {
        std::cout << "El punto (6, 6) está fuera del triángulo." << std::endl;
    }

    //Punto en el vértice del triángulo
    Point pointVertex(0, 0);
    bool isVertex = bsp(a, b, c, pointVertex);
    if (isVertex) {
        std::cout << "El punto (0, 0) está dentro del triángulo." << std::endl;
    } else {
        std::cout << "El punto (0, 0) está fuera del triángulo." << std::endl;
    }

    //Punto en la arista del triángulo
    Point pointEdge(2.5, 0);
    bool isEdge = bsp(a, b, c, pointEdge);
    if (isEdge) {
        std::cout << "El punto (2.5, 0) está dentro del triángulo." << std::endl;
    } else {
        std::cout << "El punto (2.5, 0) está fuera del triángulo." << std::endl;
    }

    return 0;
}