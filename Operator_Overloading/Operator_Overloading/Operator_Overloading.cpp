/**
* Coder: Duc Hien
* Day: 5/7/2023
* Modify: 5/7/2023
*/

/* template
<kiểu trả về> operator <toán tử cần nạp chồng> (đối số 1)
{
    //xử lí
    return <biến theo kiểu trả về>;
} 
*/

#include <iostream>

using namespace std;

class ThoiGian {
public:
    int hour;
    int minute;
public:
    ThoiGian() : hour(0), minute(0) {} // creat function default
    ThoiGian(int h, int m): hour(h), minute(m) {} // create function two parameter

    // hàm nạp chồng toán tử ++ tiền tố
    ThoiGian operator++() 
    {
        ++minute;
        if (minute >= 60)
        {
            ++hour;
            minute -= 60;
        }
        return ThoiGian(hour, minute);
    }

    // ham toan tu nap chong hau to
    ThoiGian operator++(int) 
    {
        ThoiGian T(hour, minute);
        minute++;
        if (minute >= 60)
        {
            hour++;
            minute -= 60;
        }
        return T;
    }

    // ham nap chong toan tu + mot ngoi
    ThoiGian operator+(ThoiGian& Ts) 
    {
        ThoiGian T;
        T.hour = this->hour + Ts.hour;
        T.minute = this->minute + Ts.minute;
        if (T.minute >= 60)
        {
            ++T.hour;
            T.minute -= 60;
        }
        return T;
    }

    // ham nap chong toan tu - 2 ngoi
    friend ThoiGian operator-(ThoiGian& T1, ThoiGian& T2) // friend function
    {
        ThoiGian T;
        T.hour = T1.hour - T2.hour;
        T.minute = T1.minute - T2.minute;
        return T;
    }

    // nap chong toan tu nhap
    friend istream& operator >> (istream& is, ThoiGian& T)
    {
        cout << "Hour = ";
        is >> T.hour;
        cout << "Minute = ";
        is >> T.minute;
        return is;
    }

    // nap chong toan tu xuat
    friend ostream& operator << (ostream& os, ThoiGian& T)
    {
        os << T.hour << "H:" << T.minute << "M" << endl;
        return os;
    }

    friend bool operator < (ThoiGian& T1, ThoiGian& T2)
    {
        if (T1.hour == T2.hour)
        {
            if (T1.minute < T2.minute)
                return true;
            else
                return false;
        }
    }
};

int main()
{
    ThoiGian T1(8, 59), T2(6, 24);
    ThoiGian T3;

    // Check toan tu nhap - xuat
    cout << "Thoi gian T1: " << T1;
    cout << "Thoi gian T2: " << T2;

    // Test toan tu nap chong + mot ngoi
    T3 = T1 + T2;
    cout << "Thoi gian hien tai cua T3: ";
    cout << T3;

    // Test toan tu nap chong ++ hau to
    if (T3++.minute == 24)
    {
        cout << "Hau to FALSE";
        cout << T3;
    }
    else
        cout << "Hau to TRUE" << endl;
    cout << "Thoi gian sau khi thuc hien phep toan ++ hau to: " << T3;

    // Test toan tu nap chong ++ tien to
    if (++T3.minute == 25)
        cout << "Tien to TRUE" << endl;
    else
        cout << "Tien to FALSE " << T3;
    cout << "Thoi gian sau khi thuc hien phep toan ++ tien to: " << T3;

    // Test toan tu nap chong - hai ngoi
    ThoiGian T4;
    T4 = T1 - T2;
    cout << "Thoi gian T4: " << T4 << endl;

    // Test toan tu nao chong nhap >>
    ThoiGian T5;
    cout << "Nhap thoi gian T5" << endl;
    cin >> T5;
    cout << "Thoi gian T5: " << T5 << endl;

}
