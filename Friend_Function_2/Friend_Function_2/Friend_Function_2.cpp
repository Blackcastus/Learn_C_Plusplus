#include <iostream>

using namespace std;

const int IDLE = 0;
const int INUSE = 1;

class C2;

class C1 {
    int status; // IDLE is off, INUSE is on screen
public:
    void set_status(int state);
    friend int idle(C1 a, C2 b); // friend function
};

class C2 {
    int status; // IDLE is off, INUSE is on screen
public:
    void set_status(int state); 
    friend int idle(C1 a, C2 b); // friend function
};

void C1::set_status(int state)
{
    status = state;
}

void C2::set_status(int state)
{
    status = state;
}

int idle(C1 a, C2 b)
{
    if (a.status || b.status)
        return 0;
    else
        return 1;
}

int main()
{
    C1 x;
    C2 y;

    x.set_status(IDLE);
    y.set_status(INUSE);

    if (idle(x, y))
        cout << "Screen can be used.\n";
    else
        cout << "In use.\n";

    return 0;
}