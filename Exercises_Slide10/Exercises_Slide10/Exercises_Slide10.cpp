#include <iostream>

using namespace std;

class Point7 {
private:
    int x, y;
public:
    Point7(int i = 0, int j = 0) : x(i), y(j)
    {
        cout << "Normal Constructor called\n";
    }

    Point7(const Point7& t)
    {
        y = t.y;
        cout << "Copy Constructor caller\n";
    }
};

int main()
{
    Point7 *t17, *t27;
    t17 = new Point7(10, 15);
    t27 = new Point7(*t17);

    Point7 t3 = *t17;
    Point7 t4;
    t4 = t3;
    return 0;
}