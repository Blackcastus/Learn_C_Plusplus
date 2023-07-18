#include <iostream>
#include <string>
using namespace std;

class MyClass {       // The class
public:             
    /* attribute */
    string fullName;
    int age;        
    int weight;  

    /* method */
    void printInfo(); //show infor member
    void printHabit(); 
};

void MyClass::printInfo()
{
    cout << "My name is " << fullName << "\n";
    cout << "I'm " << age << " year old\n";
    cout << "My weight is " << weight;
}

void MyClass::printHabit()
{
    cout << "My habit is love person\n";
}

int main() {
    MyClass member;  // Create an object of MyClass

    string ten = "Pham Duc Hien";
    int tuoi = 24;
    int ky = 59;

    // Access attributes and set values
    member.fullName = ten;
    member.age = tuoi;
    member.weight = ky;

    member.printInfo();
    member.printHabit();

    // Print values
    /*cout << "my name is " << member.fullName << "\n";
    cout << "I'm " << member.age << "\n";
    cout << "My weight is " << member.weight;*/

    return 0;
}