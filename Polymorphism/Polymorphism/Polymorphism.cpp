#include <iostream>

using namespace std;

// Base class
class Animal {
public:
    void animalSound()
    {
        cout << "The animal makes a sound\n";
    }
};

// Derived class
class Pig : public Animal {
public:
    void animalSound()
    {
        cout << "The Pig says: wee wee\n";
    }
};

// Derived class
class Dog : public Animal {
public:
    void animalSound()
    {
        cout << "The Dog says: bow bow\n";
    }
};

// Derived class
class Cat : public Animal {
public:
    void animalSound()
    {
        cout << "The Cat says: meo meo\n";
    }
};

// Derived class
class Hien : public Animal {
public:
    void animalSound()
    {
        cout << "Hien says: Hello but Hien not Animal\n";
    }
};

int main()
{
    Animal myAnimal;

    Pig myPig;
    Dog myDog;
    Cat myCat;
    Hien myHien;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();
    myCat.animalSound();
    myHien.animalSound();

    return 0;
}
