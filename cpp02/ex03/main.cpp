#include <iostream>
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

void printBspResult(Point const a,
                    Point const b,
                    Point const c,
                    Point const point)
{
    std::cout << "Point ("
              << point.getX() << ", "
              << point.getY() << ") is ";

    if (bsp(a, b, c, point))
        std::cout << "inside the triangle";
    else
        std::cout << "outside the triangle";

    std::cout << std::endl;
}

int main(void)
{
    Point a(0.0f, 0.0f);
    Point b(10.0f, 0.0f);
    Point c(5.0f, 10.0f);

    Point p1(5.0f, 5.0f);
    Point p2(15.0f, 5.0f);
    Point p3(0.0f, 0.0f);
    Point p4(5.0f, 0.0f);
    Point p5(3.0f, 3.0f);

    std::cout << "Triangle vertices:\n";
    std::cout << "A(0, 0), B(10, 0), C(5, 10)\n\n";

    printBspResult(a, b, c, p1);
    printBspResult(a, b, c, p2);
    printBspResult(a, b, c, p3);
    printBspResult(a, b, c, p4);
    printBspResult(a, b, c, p5);

    return 0;
}