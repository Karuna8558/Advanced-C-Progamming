#include <iostream>

int main() {
    struct Point {
        int x;
        int y;
    } p1;

    Point* P2 = &P1;  //same as p1
    Point* p3 = new Point;

    p1 ={1,2};
    p1.x = 5;
    std::cout << p2->x << ", " << (*p2).y << std::end;
    (*p3).x = 10; (*p3).y = 20;
    std::cout << p3->y << std::endl;
}
