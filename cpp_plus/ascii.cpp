#include <iostream>

int main()
{
    using namespace std;
    cout << "\a\t\b\r" << endl;
    int i;
    int *p = &i;
    cout << &i << endl;
    cout << p << endl;

    return 0;
}