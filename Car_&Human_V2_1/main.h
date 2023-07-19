#ifndef _MAIN_H_
#define _MAIN_H_

#include <iostream>
#include <string>

using namespace std;

#define CAPASITOR_MAX 6
#define NORMAL_MAX 4
#define PERFORMENT_MAX 2
#define BORROW_MAX 2

enum eCarType
{
    NOTHING = 0,
    NORMAL, // xe loai normal
    PERFORMENT, // xe loai performent
};

class Gara
{
private:
    int current_capasity;      // tong so luong xe hien dang co trong ga ra
    int nor_cap;     // tong so luong xe normal
    int per_cap;     // tong so luon xe per
public:
    
    void ShowInfor();
    void Get_Nor_Per(int, int);
    int Read_Gara();
    int Read_Nor();
    int Read_Per();

};

class Car
{
private:
    // static const string serial; // serial number khong the thay doi trong qua trinh run
    
protected:
    static const string serial; // serial number khong the thay doi trong qua trinh run
    static const int power;
    int speed;

public:
    Car();
    // virtual void ShowInfor();
};

class carNormal : public Car
{

public:
    carNormal(Gara& g); // tang so luong xe normal
    void GetTracking(double s); // tracking speed cua loai xe normal
    void ShowInfor();
};

class carPerforment : public Car
{
private:
    int turbo;
    double longitude;
    double latitude;
public:
    carPerforment(Gara& g); // tang so luong xe performent
    void GetTracking(double s, int tur, double longi, double lati); // tracking speed va location cua xe
    void ShowInfor();
};

class User : public Car
{
private:
    int car_number_borrow;
public:
    User();
    void Borrow(string typeCar);
    void GiveBack(string typeCar);
    void ShowInFor();
};

#endif // _MAIN_H