#include <iostream>
using namespace std;
template <class T>
T Max(T a, T b)
{
    if (a > b)
    {
        return a;
    }
    else
        return b;
}
int main()
{
    int a = 7, b = 5;
    float x = 2.5, y = 4.5;
    cout << "Max: " << Max<int>(a, b) << endl;
    cout << "Max: " << Max<float>(x, y) << endl;
}