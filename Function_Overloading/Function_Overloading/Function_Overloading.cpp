/*
* Function Overloading là tính năng của ngôn ngữ C++ (không có trong C).
* Kỹ thuật này cho phép sử dụng cùng một tên gọi cho nhiều hàm (có cùng mục đích). 
* Nhưng khác nhau về kiểu dữ liệu tham số hoặc số lượng tham số.
* Note: 
*	Không thể nạp chồng hàm nếu chúng chỉ khác nhau kiểu dữ liệu trả về.
*	Khai báo typedef chỉ là một bí danh (không phải kiểu dữ liệu mới), vì vậy chương trìng sẽ gặp lỗi:
*	Tham số hàm con trỏ * và mảng [] là tương đương. Lúc này, khai báo mảng [] được chuyển đổi ngầm định thành một con trỏ.
*	C++ cho phép nạp chồng hàm với tham số là const chỉ khi tham số const là tham chiếu hoặc con trỏ.
* 
*/

#include <iostream>
//#include <cstring>

using namespace std;

int Abs(int i);
double Abs(double d);
long Abs(long l);

void Fun(char* a);
void Fun(const char* a);

int main()
{
	const char *ptr = "DucHien\n";
	char ptr2[] = "PhamDucHien\n";
	Fun(ptr);
	Fun(ptr2);

	cout << Abs(-10) << "\n";
	cout << Abs(-11.5) << "\n";
	cout << Abs(-9L) << "\n";


	return 0;
}

int Abs(int i)
{
	cout << "Using integer abs()\n";
	return i < 0 ? -i : i;
}
double Abs(double d)
{
	cout << "Using double abs()\n";
	return d < 0 ? -d : d;
}
long Abs(long l)
{
	cout << "Using long abs()\n";
	return l < 0 ? -l : l;
}

void Fun(char* a)
{
	cout << "non-const fun() " << a;
}
void Fun(const char* a)
{
	cout << "const fun() " << a;
}