#include <iostream>

using namespace std;

/* Nhap thong tin xe */
class Car_Properties
{
private:
    int ser_num; // serial number
    static int cnt;

    int power; // engine power
    double dspeed; // engine speed
    int turbo; // turbo charger
    double longitude;
    double latitude;
public:
    
    Car_Properties(int pw = 0, double s = 0, int tb = 0, double lg = 0, double lt = 0)
    {
        ser_num = ++cnt;
        power = pw;
        turbo = tb;
        longitude = lg;
        latitude = lt;
        Speed(s);
    }
    ~Car_Properties()
    {
        --cnt;
    }
    // function overloading: ham nap chong
    void Speed(int i);
    void Speed(double d);

    // ham hien thi tat ca thong tin 
    void ShowInfor() const; 
    
    // ham hien thi thon tin cu the
    void ShowId() const;
    void ShowPower() const;
    void ShowSpeed() const;
    void ShowTurbo() const;
    void ShowNaSys() const;
};

/* hien thi tat ca thong tin */
void Car_Properties::ShowInfor() const
{
    //cout << "Serial number: " << this->id << endl;
    cout << "Engine power: " << this->power << "Hp\n";
    cout << "Engine speed: " << this->dspeed << "Km/h\n";
    if (turbo >= 0)
        cout << "Boost engine speed to " << turbo << "%\n";
    if (longitude != 0 || latitude != 0)
        cout << "Positioning (" << longitude << ", " << latitude << ")\n";
}

/* hien thi thong tin cu the */
void Car_Properties::ShowId() const
{
    if (this->ser_num != 0)
        cout << "Serial number: " << this->ser_num << endl;

}
void Car_Properties::ShowPower() const
{
    if (power >= 0)
        cout << "Engine power: " << this->power << "Hp\n";
}
void Car_Properties::ShowSpeed() const
{
    if (dspeed >= 0)
        cout << "Engine speed: " << this->dspeed << "Km/h\n";
}
void Car_Properties::ShowTurbo() const
{
    if (turbo >= 0)
        cout << "Engine turbo: " << this->turbo << "%\n";
}
void Car_Properties::ShowNaSys() const
{
    if (longitude != 0 || latitude != 0)
        cout << "Positioning (" << longitude << ", " << latitude << ")\n";
}

/* thong so speed dinh dang kieu int */
void Car_Properties::Speed(int i)
{
    this->dspeed = i;
}

/* thong so speed dinh dang kieu double */
void Car_Properties::Speed(double d)
{
    this->dspeed = d;
}

/* class cha */
class Person
{
public:
    Person()
    {
        cout << "\nDrive a car\n";
    }

    /* tao ra 1 function ao ten la infor() */
    virtual void Infor(const Car_Properties& c)
    {
        cout << "Person infor()\n";
        //c.ShowInfor();
    }
};

/* class Engineer duoc ke thua tu clas Person */
class Engineer : public Person 
{
public:
    void Infor(const Car_Properties& c)
    {
        //cout << "Engineer\n";
        c.ShowId();
        c.ShowInfor();
    }
};

/* class User duoc ke thua tu class person */

class User : public Person {
public:
    void Infor(const Car_Properties& c)
    {
        //cout << "User\n";
        c.ShowNaSys();
        c.ShowPower();
        c.ShowSpeed();
    }
};

int Car_Properties::cnt;

int main()
{
    //string idCar = "0123456789";
    int powerCar = 500;
    double nor_speedCar = 100.5;
    double per_speedCar = 100;
    int turboCar = 10;
    double longitude = 10.842;
    double latitude = 106.713;

    /* Entry data car profuct line */
    Car_Properties normal(powerCar, nor_speedCar);
    Car_Properties performance(powerCar, per_speedCar, turboCar, longitude, latitude);

    /* show infor Engineer */
    Engineer engine;
    engine.Infor(normal);
    //engine.Infor(performance);

    /* show infor User */
    User user;
    //user.Infor(normal);
    user.Infor(performance);

    return 0;
}