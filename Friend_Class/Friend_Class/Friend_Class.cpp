#include <iostream>

using namespace std;
class TwoValues {
    int a;
    int b;
public:
    TwoValues(int i, int j) { a = i; b = j; }
    friend class Min;
    friend class Max;
};

class Min {
public:
    int min(TwoValues x);
};

class Max {
public:
    int max(TwoValues x);
};

int Min::min(TwoValues x)
{
    return x.a < x.b ? x.a : x.b;
}

int Max::max(TwoValues x)
{
    return x.a > x.b ? x.a : x.b;
}

int main()
{
    TwoValues ob(30, 20);
    Min minimum;
    Max maximum;

    cout << "min number " << minimum.min(ob) << "\n";

    cout << "max number " << maximum.max(ob) << "\n";

    return 0;
}