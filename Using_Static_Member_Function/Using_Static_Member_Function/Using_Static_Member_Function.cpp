#include <iostream>

using namespace std;

class test
{
private:
    int objNo;
    static int objCnt;
public:
    test()
    {
        objNo = ++objCnt;
        //cout << "Count: " << objCnt << endl;
        //cout << "Object number: " << objNo << endl;


    }
    ~test()
    {
        --objCnt;
        //cout << "Count: " << objCnt << endl;
        //cout << "Object number: " << objNo << endl;

    }

    void printObjNumber()
    {
        cout << "Object number: " << objNo << endl;
    }
    static void printObjCount()
    {
        cout << "Count: " << objCnt << endl;
    }
};

int test::objCnt;

int main()
{
    test t1;

    test t2;

    test t3;

    t1.printObjNumber();
    t2.printObjNumber();
    t3.printObjNumber();

}