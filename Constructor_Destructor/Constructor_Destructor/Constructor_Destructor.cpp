#include <iostream>

using namespace std;


class Point {
    int    xVal, yVal;
public:
    Point(int  x, int  y) {
        xVal = x;  yVal = y;
    }
    void OffsetPt(int  x, int  y) {
        xVal += x;  yVal += y;
    }
};


int main()
{
    Point   pt1(10, 20);
    pt1.OffsetPt(2, 2);

    /* 
    * Point  pt2();
    * Point* pt3 = new Point();
    * => Error no parameter 
    */
    Point  pt2(1,2);
    Point* pt3 = new Point(3,4);

}
