#include <iostream>
#include <string.h>

using namespace std;

class Remote {
public:
    string series_number;
    bool status;
    void turnOn()
    {
        cout << "Turn on what?\n";
    }
    void turnOff()
    {

    }

    Remote(string series) : series_number(series)
    {

    }
    void printSeries()
    {
        cout << "Series: " << series_number << endl;
    }
private:
    string message;
    string active_code;
};

int main()
{
    Remote remote("12345abcdef");
    remote.printSeries();
    remote.turnOn();
    return 0;
}

