/**
* Coder: Duc Hien
* Day: 5/7/2023
* Modify: 5/7/2023
*/

// neu nhu goi ham con ma ben trong k co gi thi ham virtual tai class cha se hoat dong

#include <iostream>

using namespace std;

class base {
public:
    /*base()
    {
        cout << "b";
    }*/
    virtual void vfunc()
    {
        cout << "This is base's vfunc().\n";
    }
};

class derived1 : public base {
public:
    /*derived1()
    {
        cout << "a";
    }*/
    void vfunc()
    {
        cout << "This is derived1's vfunc()\n";
    }
};

class derived2 : public base {
public:
    /*void vfunc()
    {
        cout << "This is derived2's vfunc()\n";
    }*/
};

int main()
{
    base *p, b;
    derived1 d1;
    derived2 d2;

    // point to base;
    p = &b;
    p->vfunc(); // access base's vFunc()

    p = &d1;
    p->vfunc(); // access derived1's vFunc()

    p = &d2;
    p->vfunc();
}