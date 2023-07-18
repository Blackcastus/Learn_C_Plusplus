#include <iostream>

using namespace std;

// 1. single responsibility
// 2. Open Closed

class Book {
private:
	string name;
	int year;
	int price;

public:
	//Book() : year(0), price(0){}
	Book(string n, int y, int p) : name(n), year(y), price(p){}

	//void GetBook(int y, int p)
	//{
	//	this->price = p;
	//	this->year = y;
	//	//cout << year << " | " << price << endl; // debug output
	//}
	friend class ShowBook;
};

class ShowBook {
public:
	//void ShowBookInfo(const Book& b)
	ShowBook(const Book& b)
	{
		cout << "Book infor\n";
		cout << "Name book: " << b.name << endl;
		cout << "Year: " << b.year << endl;
		cout << "Price: " << b.price << ".000 VND" << endl;
	}
};

int main()
{
	/*Book myBook;
	myBook.GetBook(20, 50);*/

	Book sach("Code C++",2023, 40);
	ShowBook myB(sach);

	//myB.ShowBookInfo(sach);

	return 0;
}