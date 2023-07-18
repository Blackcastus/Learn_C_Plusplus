#include <iostream>
//#include <bits/stdc++.h>

using namespace std;

class MyDestrucor {
public:
    // Define Contructor
    MyDestrucor() { cout << " Constructor excecuted\n"; }

    // Define Distructor
    ~MyDestrucor() { cout << "Destructor executed\n"; }
};


int main()
{
    MyDestrucor test, test1, test2;
    MyDestrucor test3;

    return 0;
}
