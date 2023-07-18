#include <iostream>
#include <cmath>

using namespace std;

class MyClass {
    int a, b;
public:
    friend int sum(MyClass x); // sum() is not a member function of any class.
    void set_ab(int i, int j);
};

void MyClass::set_ab(int i, int j)
{
    a = i;
    b = j;
}

int sum(MyClass x)
{
    /* tai vi sum() la ban cua MyClass cho nen no co the truy cap truc tiep vao a va b */

    return sqrt(pow(x.a, 2) + pow(x.b, 2)); // tinh canh huyen cua tam giac vuong
}

int main()
{
    MyClass hien;

    hien.set_ab(3, 4);
    cout << sum(hien);

    /*cout << pow(3, 2);*/

    return 0;
}