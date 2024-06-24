#include "Point.hpp"

Fixed	calculate_area(Point const &p1, Point const &p2, Point const &p3)
{
	Fixed	area;

	area = (p1.getX() * (p2.getY() - p3.getY()) + 
			p2.getX() * (p3.getY() - p1.getY()) +
			p3.getX() * (p1.getY() - p2.getY())) / 2.0f;
	if (area < 0)
		area = area * -1;
	return area;
}

bool bsp(Point const p1, Point const p2, Point const p3, Point const point) {
	if (point == p1 || point == p2 || point == p3)
		return false;
	Fixed totalArea = calculate_area(p1, p2, p3);
	Fixed abTriangle = calculate_area(p1, p2, point);
	Fixed acTriangle = calculate_area(p1, point, p3);
	Fixed bcTriangle = calculate_area(point, p2, p3);
	return totalArea ==  abTriangle + acTriangle + bcTriangle;
}