#include <iostream>

using namespace std;

class base_15 {
public:
    virtual void func()
    {
        cout << " virtual base_15\n";
    }
};

class derive_15 : public base_15 {
public:
    void func()
    {
        cout << "derive_15\n" << endl;
    }
};

class derive_16 : public base_15 {
public:
    //void func()
    //{
    //    //cout << "derive_15\n" << endl;
    //}
};

void PrintOutput(base_15* x)
{
    x->func();
}

int main()
{
    /*derive_15 d;
    PrintOutput(&d);*/

    derive_16 r;
    PrintOutput(&r);

    return 0;
}