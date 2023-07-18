#include <iostream>

using namespace std;

class Point {
	int xVal, yVal;
public:
	void SetPt(int, int);
	void OffsetPt(int, int);
public:
	int GetPtX();
	int GetPtY();
};

void Point::SetPt(int x, int y)
{
	xVal = x;
	yVal = y;
}
void Point::OffsetPt(int x, int y)
{
	xVal += x;
	yVal += y;
}

int Point::GetPtX()
{
	return xVal;
}

int Point::GetPtY()
{
	return yVal;
}

int main()
{
	Point point1;
	int userX, userY;

	cout << "Enter your point:\n";
	cout << "X = ";
	cin >> userX;
	cout << "Y = ";
	cin >> userY;

	point1.SetPt(userX, userY);
	cout << "Point 1\n";
	cout << "X = " << point1.GetPtX() << " & Y = " << point1.GetPtY();

	return 0;
}

//int main()
//{
//	Point point1;
//
//	point1.SetPt(5, 10);
//	cout << "Point 1\n";
//	cout << "X = " << point1.GetPtX() << " & Y = " << point1.GetPtY();
//
//	return 0;
//}