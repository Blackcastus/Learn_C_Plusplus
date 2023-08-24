#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Hello Vector in C++" << endl;
    vector<string>  vector_1;
    vector<unsigned int> vector_count;

    for(int i = 0; i < 10; i++)
    {
        vector_1.push_back("Hello");
        vector_count.push_back(i);
    }

    for(int i = 0; i < 10; i++)
    {
        cout << i << endl;
        cout << "string = " << vector_1[i] << " | count = " << vector_count[i] << endl;

    }
    return 0;
}