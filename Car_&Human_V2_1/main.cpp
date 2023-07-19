#include "main.h"

int convertSpeed(int s);
double convertSpeed(double s);
void Init_Car();

Gara gara;

const string Car::serial = "0123456789";
const int Car::power = 500;

int main()
{
    string nCar = "Normal";
    string pCar = "Performent";

    // init 6 xe trong gara trong do co: 4 xe normal, 2 xe performent
    Init_Car();

    User user1;
    User user2;

    user1.Borrow(nCar);
    user1.Borrow(pCar);
    // user.Borrow(nCar);
    // user.Borrow(nCar);
    gara.ShowInfor();

    user2.Borrow(pCar);
    user2.Borrow(pCar);

    user1.GiveBack(pCar);
    user2.Borrow(pCar);

    return 0;
}

/* -------------- init -------------- */


void Init_Car()
{
    // init 4 car normal
    
    gara.ShowInfor();

    carNormal *normal1 = new carNormal(gara);
    carNormal *normal2 = new carNormal(gara);
    carNormal *normal3 = new carNormal(gara);
    carNormal *normal4 = new carNormal(gara);

    // gara.ShowInfor();

    // init 2 car performent
    carPerforment *performent1 = new carPerforment(gara);
    carPerforment *performent2 = new carPerforment(gara);

    gara.ShowInfor();

}

/* -------------- Method of User -------------- */

User::User() // contructor
{
    car_number_borrow = 0;
    cout << "Driving a car" << endl;
}

/**
 * Truong hop thue xe
*/
void User::Borrow(string typeCar)
{
    int x;
    
    cout << "SL car da duoc thue: " << car_number_borrow << endl;

    if(car_number_borrow < BORROW_MAX)
    {
        if(typeCar == "Normal")
        {
            x = NORMAL;
        }
        else if(typeCar == "Performent")
        {
            x = PERFORMENT;
        }
        else
        {
            cout << "Information car ERROR" << endl;
        }
    }
    else
        cout << "You borrow overload" << endl;
    
    switch (x)
    {
        case NORMAL:
            if(0 < gara.Read_Nor() && gara.Read_Nor() < NORMAL_MAX + 1)
            {
                // gara.nor_cap--;
                gara.Get_Nor_Per(-1,0);
                car_number_borrow++;
                cout << "Da co 1 xe normal duoc thue" << endl;
            }
            else if (0 == gara.Read_Nor())
            {
                cout << "Xe normal trong gara da het" << endl;
            }
            break;
        case PERFORMENT:
            if(0 < gara.Read_Per() && gara.Read_Per() < PERFORMENT_MAX + 1)
            {
                // gara.per_cap--;
                gara.Get_Nor_Per(0,-1);
                car_number_borrow++;
                cout << "Da co 1 xe Performent duoc thue" << endl;
            }
            else if (0 == gara.Read_Per())
            {
                cout << "Xe performent trong gara da het" << endl;
            }
            break;
        default:
            // cout << "leu leu" << endl;
            break;
        
    }
    cout << "--------------" << endl;
}

/**
 * Truong hop tra xe
*/
void User::GiveBack(string typeCar)
{
    int x;

    if(typeCar == "Normal")
    {
        x = NORMAL;
    }
    else if(typeCar == "Performent")
    {
        x = PERFORMENT;
    }
    else
    {
        cout << "Information car ERROR" << endl;
    }

    switch (x)
    {
        case NORMAL:
            // if(0 < gara.Read_Nor() && gara.Read_Nor() < NORMAL_MAX)
            // {
                gara.Get_Nor_Per(1,0);
                car_number_borrow--;
                cout << "Da co 1 xe normal duoc tra lai" << endl;
            // }
            break;
        case PERFORMENT:
            // if(0 < gara.Read_Per() && gara.Read_Per() < PERFORMENT_MAX)
            // {
                gara.Get_Nor_Per(0,1);
                car_number_borrow--;
                cout << "Da co 1 xe Performent duoc tra lai" << endl;
            // }
            break;
        default:

            break;
    }
    cout << "-----------------" << endl;
}

void User::ShowInFor()
{
    cout << "So xe ban dang thue: " << car_number_borrow << endl;
}

/* -------------- Car -------------- */

Car::Car()
{
    speed = 0;
}


/* -------------- Car Normal -------------- */

/**
 * tang so luong xe normal
*/

carNormal::carNormal(Gara& g)
{
    // g.nor_cap++;
    gara.Get_Nor_Per(1,0);
}

/**
 * tracking toc do cua xe normol khi user di chuyen
*/

void carNormal::GetTracking(double s)
{
    speed = convertSpeed(s);
}

void carNormal::ShowInfor()
{
    cout << "serial number: " << Car::serial << endl;
    cout << "power engine: " << power << "Hp" << endl;
    cout << "speed: " << speed << "Km/h" << endl;
}
/* -------------- Car Performent -------------- */

carPerforment::carPerforment(Gara& g)
{
    gara.Get_Nor_Per(0,1);
    turbo = 0;
    longitude = 0;
    latitude = 0;
}

void carPerforment::GetTracking(double s, int tur, double longi, double lati)
{
    speed = convertSpeed(s);
    turbo = tur;
    longitude = longi;
    latitude = lati;

}

void carPerforment::ShowInfor()
{
    // cout << "serial number: " << Car::serial << endl;
    cout << "power engine: " << power << "Hp" << endl;
    cout << "speed: " << speed << "Km/h" << endl;
    cout << "turbo: " << turbo << "%" << endl;
    cout << "position: " << longitude << ":" << latitude << endl;
}

/* -------------- Gara -------------- */
void Gara::Get_Nor_Per(int n = 0, int p = 0)
{
    nor_cap += n;
    per_cap += p;
    current_capasity = nor_cap + per_cap;
}
void Gara::ShowInfor()
{
    if( Gara::Read_Gara() == NOTHING)
        cout << "Gara have not Car" << endl;
    else if(Gara::Read_Gara() > CAPASITOR_MAX)
        cout << "My gara is full" << endl;
    else
    {
        cout << "sum car normal: " << Gara::Read_Nor() << endl;
        cout << "sum car performent: " << Gara::Read_Per() << endl;
        cout << "sum car: " << Gara::Read_Gara() << endl;
    }

    if(Gara::Read_Nor() > NORMAL_MAX)
    {
        cout << "Car normal max" << endl;
    }

    if (gara.Read_Per() > PERFORMENT_MAX)
    {
        cout << "Car performent max" << endl;
    }
    cout << "Capacity of Gara: " << current_capasity << endl;
    cout << "Car Normal: " << nor_cap << endl;
    cout << "Car Performant: " << per_cap << endl;
}

int Gara::Read_Gara()
{
    return current_capasity;
}
int Gara::Read_Nor()
{
    return nor_cap;
}
int Gara::Read_Per()
{
    return per_cap;
}

/* -------------- Orther function -------------- */
// overload
int convertSpeed(int s)
{
    return s;
}
double convertSpeed(double s)
{
    return s;
}


